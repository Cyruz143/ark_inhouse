const Server = require("./Server");

function parseSnapshot(rawSnapshot) {
    ["missionStartTime", "tickTime", "fps", "fpsMin", "cps", "playerCount", "totalAiCount", "activeAiCount", "entityCount"].forEach(prop => {
        rawSnapshot[prop] = parseFloat(rawSnapshot[prop]);
    });
    rawSnapshot.isServer = rawSnapshot && rawSnapshot === "true";
    return rawSnapshot;
}

module.exports = {
    parseSnapshot: parseSnapshot
};