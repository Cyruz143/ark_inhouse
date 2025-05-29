const fs = require("fs");

const AUTH_TOKEN_COOKIE_NAME = "ark_asm_authToken";
let config;

function loadConfig() {
    const defaultConfig = {
        authTokenCookieName: AUTH_TOKEN_COOKIE_NAME,
        port: 8083,
        users: []
    };
    try {
        let config = JSON.parse(fs.readFileSync("./config.json", "utf8"));
        config.authTokenCookieName = AUTH_TOKEN_COOKIE_NAME;
        return config;
    } catch (e) {
        console.log("Error reading the config file, using default config: ", e);
        return defaultConfig;
    }
}

if (!config) {
    config = loadConfig();
}

module.exports = config;