## Dependecies

#### NodeJS and NPM
Download from and install https://nodejs.org/en/download/ .



## Build

Run `npm install` then `npm run build`. This will create a `release` directory,
containing the web server.



## Run

Edit the `config.json` to match your needs. You can change the port you will be
able to access the server from. You can also add the users here you want to give
access to in the `"<username>": "<password>"` format under the `users` property.
Make sure you have configured the Arma addon's user here too!

Start the web server with `node app.js`. You can access the it in the browser on,
the port you've configured, default `8083`. Use a user listed in the `config.json`.