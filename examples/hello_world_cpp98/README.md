# 01_hello_world_cpp98

The first classic application "Hello World" in C++98, C++11, C++14, C++17 and C++20.

## Source

[program.cpp](program.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
Hello, World!
```

## Build and run

To build `hello_world` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start hello_world.sln
```

Select `hello_world` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./hello_world.xcodeproj
```

Select `hello_world` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./hello_world
```

### Linux with Visual Studio Code :

Launch Visual Studio Code.
Select `File/Open Folder..` menu.
Select `hello_world` folder and open it.
Build and Run `hello_world` project.
