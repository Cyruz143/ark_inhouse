const crypto = require("crypto");

const jwt = require("jsonwebtoken");

const Config = require("./Config");

const JWT_ALGORITHM = "HS265";
let JWT_SECRET;

function createTokenForUser(username) {
    return jwt.sign({
        username: username,
        iat: Math.floor(Date.now() / 1000)
    }, JWT_SECRET);
}

function isValidToken(token) {
    try {
        const usernames = Object.keys(Config.users);
        const payload = jwt.verify(token, JWT_SECRET, { algorithm: JWT_ALGORITHM });
        if (payload && usernames.indexOf(payload.username) >= 0) {
            return true;
        }
    } catch (err) {
        return false;
    }
    return false;
}

function init(callback) {
    crypto.randomBytes(256, (err, buf) => {
        if (err) { throw err; }
        JWT_SECRET = buf.toString();
        callback();
    });
}

function login(credentials) {
    if (credentials && credentials.username && Config.users[credentials.username] === credentials.password) {
        return createTokenForUser(credentials.username);
    }
    return null;
}

module.exports = {
    init: init,
    login: login,
    isValidToken: isValidToken
};