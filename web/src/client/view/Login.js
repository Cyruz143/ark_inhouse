const m = require("mithril");
const Config = require("../Config");
const Store = require("../Store");

function loginView(successCb) {
    if (Store.Login.authToken) { return null; }
    const failedDisplay = Store.Login.failed ? "block" : "none";
    const keyHandler = e => loginKeyHandler(e, successCb);

    return m("div.login", [
        m("div#login-error", { style: `display: ${failedDisplay}` }, "Wrong username or password!"),
        fieldView("Username", "username", "text", Store.Login.username, value => Store.Login.username = value, keyHandler),
        fieldView("Password", "password", "password", Store.Login.password, value => Store.Login.password = value, keyHandler),
        m("button#login-button", { onclick: () => login(successCb) }, "Login")
    ]);
}

function fieldView(label, id, type, value, changeHandler, keyHandler) {
    return m("div.field", [
        m("label", { for: id }, label),
        m("input", {
            id: id,
            name: id,
            type: type,
            oninput: m.withAttr("value", changeHandler),
            onkeyup: keyHandler
        }, value)
    ]);
}

function loginKeyHandler(e, successCb) {
    if (e.keyCode === 13) {
        login(successCb);
    }
}

function login(successCb) {
    m.request({
        method: "POST",
        url: "/login",
        data: {
            username: Store.Login.username,
            password: Store.Login.password
        }
    })
    .then(result => {
        Store.Login.failed = false;
        Store.Login.authToken = result.authToken;
        successCb();
    })
    .catch(error => {
        Store.Login.failed = true;
        Store.Login.authToken = null;
    });
}

function createLoginComponent(successCb) {
    return {
        view: () => loginView(successCb)
    }
}

module.exports = {
    createLoginComponent: createLoginComponent
}