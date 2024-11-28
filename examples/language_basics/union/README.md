# union

Modern C++ course `union` example.

![union](../../../docs/pictures/language_basics/union.png)

## Source

[union.cpp](union.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
union function
```

## Build and run

To build `union` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start union.sln
```

Select `union` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./union.xcodeproj
```

Select `union` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./union
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `union` folder and open it.
* Build and Run `union` project.
