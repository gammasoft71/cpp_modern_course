# scope

Modern C++ course `scope` example.

![scope](../../../../docs/pictures/language_basics/scope.png)

## Source

[scope.cpp](scope.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
scope function
```

## Build and run

To build `scope` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start scope.sln
```

Select `scope` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./scope.xcodeproj
```

Select `scope` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./scope
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `scope` folder and open it.
* Build and Run `scope` project.
