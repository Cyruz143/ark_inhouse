const http = require("http");
const fs = require("fs");

const express = require("express");
const cookie = require("cookie");
const basicAuth = require("express-basic-auth");
const bodyParser = require("body-parser");

const Config = require("./Config");
const WebSocket = require("./WebSocket");
const Server = require("./Server");
const Snapshot = require("./Snapshot");
const Auth = require("./Auth");

function createBasicAuthConfig(users) {
    return basicAuth({
        users: users,
        challenge: true
    });
}

function start() {
    const basicAuthConfig = createBasicAuthConfig(Config.users);
    const app = express();
    const server = http.createServer(app);
    WebSocket.listen(server);

    app.use(bodyParser.json());
    app.use("/", express.static("resources"));

    app.post("/login", (request, response) => {
        const token = Auth.login(request.body);
        if (token) {
            response.setHeader("Set-Cookie", cookie.serialize(Config.authTokenCookieName, token, { httpOnly: true }));
            response.json({ authToken: token});
            return;
        }
        response.status(401);
        response.send("Invalid username or password!");
    });

    app.post("/mission-init", basicAuthConfig, (request, response) => {
        response.json({});
    });

    app.post("/mission-snapshot", basicAuthConfig, (request, response) => {
        const snapshot = Snapshot.parseSnapshot(request.body);
        const server = Server.getOrCreateServer(snapshot);
        Server.updateServer(server, snapshot);
        WebSocket.broadcastToClients({ type: "mission-snapshot", snapshot: server });
        response.json({});
    });

    server.listen(Config.port, () => {
        console.log(`Listening on port ${server.address().port}.`);
    });
}

Auth.init(start);