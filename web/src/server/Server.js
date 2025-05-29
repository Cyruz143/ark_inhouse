const servers = {};

function getServerKey(server) {
    return server.profileName;
}

function getOrCreateServer(snapshot) {
    var server = servers[getServerKey(snapshot)];
    if (!server) {
        server = { profileName: "" };
        servers[getServerKey(snapshot)] = server;
        updateServer(server, snapshot);
    }
    return server;
}

function updateServer(server, snapshot) {
    Object.keys(snapshot).forEach(key => {
        server[key] = snapshot[key];
    });
}

function removeServer(serverId) {
    delete servers[serverId];
}

module.exports = {
    getOrCreateServer: getOrCreateServer,
    updateServer: updateServer,
    removeServer: removeServer
};