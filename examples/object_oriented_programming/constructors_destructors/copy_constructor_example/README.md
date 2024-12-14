# copy_constructor_example

Modern C++ course `copy_constructor_example` example.

![copy_constructor_example](../../../../docs/pictures/object_oriented_programming/copy_constructor_example.png)

## Source

[copy_constructor_example.cpp](copy_constructor_example.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
v1 = {0, 10, 20, 30, 40}
v2 = {0, 10, 20, 30, 40}
v3 = {0, 10, 20, 30, 40}
```

## Build and run

To build `copy_constructor_example` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start copy_constructor_example.sln
```

Select `copy_constructor_example` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./copy_constructor_example.xcodeproj
```

Select `copy_constructor_example` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./copy_constructor_example
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `copy_constructor_example` folder and open it.
* Build and Run `copy_constructor_example` project.
