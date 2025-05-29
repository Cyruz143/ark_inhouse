const m = require("mithril");
const Config = require("./Config");
const Store = require("./Store");
const Graph = require("./view/Graph");
const Server = require("./view/Server");
const Login = require("./view/Login");

m.mount(document.body, Login.createLoginComponent(connect));

function connect() {
    const webSocket = new WebSocket("ws://" + window.location.host);

    webSocket.addEventListener("message", function (event) {
        const message = JSON.parse(event.data);
        if (message.type === "mission-snapshot") {
            processSnapshot(message.snapshot);
        }
    });
}

function processSnapshot(rawSnapshot) {
    var server = Store.Server.getOrCreateServer(rawSnapshot.profileName);
    server.serverId = rawSnapshot.serverId;
    server.profileName = rawSnapshot.profileName;
    server.isServer = rawSnapshot.isServer;
    server.missionName = rawSnapshot.missionName;
    server.worldName = rawSnapshot.worldName;
    server.tickTime = rawSnapshot.tickTime;
    pushData(server, rawSnapshot);
    m.mount(document.body, Server.ServersComponent);
    Graph.updateGraph(server.graph, server.tickTime);
}

function pushData(server, rawSnapshot) {
    const toPointWithTickTime = toPoint.bind(null, server.tickTime);
    Config.seriesAxes.forEach(prop => {
        const data = server.data[prop];
        data.push(toPointWithTickTime(rawSnapshot[prop]));
    });
}

function toPoint(tickTime, y) {
    return { x: tickTime, y: y };
}

/*
var tm = 0;
var int1 = setInterval(() => {
    var rawSnapshot = {
        profileName: "hc_unit",
        tickTime: tm,
        serverId: "123",
        missionName: "ark44_co98_the_great_crusade",
        worldName: "Colleville"
    };
    Config.seriesAxes.forEach(prop => {
        rawSnapshot[prop] = Math.random() * Config.series[prop].maxValue;
    });
    tm = tm + 5;
    processSnapshot(rawSnapshot);
}, 200);

var tm2 = 0;
var int2 = setInterval(() => {
    var rawSnapshot = {
        profileName: "Administrator",
        tickTime: tm2,
        serverId: "1234",
        missionName: "ark_co68_30_minutes_loadout.ThirskW",
        worldName: "ThirskW"
    };
    Config.seriesAxes.forEach(prop => {
        rawSnapshot[prop] = Math.random() * Config.series[prop].maxValue;
    });
    tm2 = tm2 + 5;
    processSnapshot(rawSnapshot);
}, 1000);

setTimeout(() => {
    clearInterval(int1);
}, 5000);

setTimeout(() => {
    var tm3 = tm + 300;
setInterval(() => {
    var rawSnapshot = {
        profileName: "hc_unit",
        tickTime: tm3,
        serverId: "123",
        missionName: "ark44_co98_the_great_crusade",
        worldName: "Colleville"
    };
    Config.seriesAxes.forEach(prop => {
        rawSnapshot[prop] = Math.random() * Config.series[prop].maxValue;
    });
    tm3 = tm3 + 5;
    processSnapshot(rawSnapshot);
}, 200)
}, 10000);
*/