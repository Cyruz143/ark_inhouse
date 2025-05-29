const path = require("path");
const CopyWebpackPlugin = require('copy-webpack-plugin');

const RELEASE_HOME = "./release";
const SERVER_HOME = "./src/server";
const CLIENT_HOME = "./src/client";

const serverConfig = {
    entry: {
        app: SERVER_HOME + "/index.js"
    },

    output: {
        path: path.resolve(__dirname, RELEASE_HOME),
        filename: "[name].js"
    },

    target: "node",

    resolve: {
        extensions: [".js"],
    },

    plugins: [
        new CopyWebpackPlugin([
            { from: SERVER_HOME + "/config.json" }
        ])
    ]
};

const clientConfig = {
    entry: {
        app: CLIENT_HOME + "/App.js"
    },

    output: {
        path: path.resolve(__dirname, RELEASE_HOME + "/resources"),
        filename: "js/[name].js"
    },

    resolve: {
        extensions: [".js"],
    },

    plugins: [
        new CopyWebpackPlugin([
            { from: CLIENT_HOME + "/index.html" }
        ])
    ]
};

module.exports = [serverConfig, clientConfig];