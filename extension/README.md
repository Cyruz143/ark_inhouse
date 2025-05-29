# Windows

## Dependecies

#### Visual Studio 2015 Express
Download from https://www.microsoft.com/en-us/download/details.aspx?id=48146 .

#### POCO C++
Download version `1.7.5` source from https://pocoproject.org/releases/poco-1.7.5/poco-1.7.5-all.zip .
Extract the archive somewhere, we will be referencing this folder as `POCO_HOME`.
You will need to build the following POCO components:
```
Foundation
JSON
Util
Net
```
Edit `POCO_HOME/components` file and overwrite it with the code above.

Now you should be able build POCO for 32bit with `.\buildwin.cmd 140 build static_mt both Win32 nosamples notests`.
For 64bit with `.\buildwin.cmd 140 build static_mt both x64 nosamples notests`.

#### spdlog
Download version `0.10.0` from https://github.com/gabime/spdlog/archive/v0.10.0.zip and
extract the `spdlog-0.10.0/include/spdlog` directory into `extension/include`.


#### CMake
Download and install version `3.5` or higher from https://cmake.org/download/ . Make sure
CMake is on the path.



## Building the extension

Update and set `POCO_HOME` in `extension/build/CMakeLists.txt` to match your POCO directory.

### Windows

For 32bit run `cmake . -G "Visual Studio 14 2015"`, for 64bit run `cmake . -G "Visual Studio 14 2015 Win64"`
in `extension/build` directory. Open `ark_asm_extension.sln` in Visual Studio.

You will have to build with `Release` configuration. `Debug` configuration is not part of the tutorial :P .



## Testing and deploying
Just put the `ark_asm_extension.dll` into A3 install directory or into one of the loaded addons folder.

You can also use the console application to test the extension without launching Arma 3.