const ws = require("ws");
const cookie = require("cookie");

const Config = require("./Config");
const Auth = require("./Auth");

let server;


function checkValidCookie(client) {
    const cookies = cookie.parse(client.upgradeReq.headers.cookie || "");
    if (!Auth.isValidToken(cookies[Config.authTokenCookieName])) {
        console.log("Terminating client with token: ", cookies);
        client.terminate();
    };
}

function listen(httpServer) {
    server = new ws.Server({ server: httpServer });

    server.on("connection", client => {
        client.on("message", message => {
            checkValidCookie(client);
        });
        checkValidCookie(client);
    });
}

function broadcastToClients(data) {
    Array.from(server.clients.values())
        .filter(client => client.readyState === ws.OPEN)
        .forEach(client => { client.send(JSON.stringify(data)); });
}

module.exports = {
    listen: listen,
    broadcastToClients: broadcastToClients
};