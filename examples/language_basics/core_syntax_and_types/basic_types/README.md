# basic_types

Modern C++ course `basic_types` example.

![basic_types](../../../../docs/pictures/language_basics/basic_types.png)

## Source

[basic_types.cpp](basic_types.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
basic_types
```

## Build and run

To build `basic_types` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start basic_types.sln
```

Select `basic_types` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./basic_types.xcodeproj
```

Select `basic_types` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./basic_types
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `basic_types` folder and open it.
* Build and Run `basic_types` project.
