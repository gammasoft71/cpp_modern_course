# copy_constructor

Modern C++ course `copy_constructor` example.

![copy_constructor](../../../../docs/pictures/object_oriented_programming/copy_constructor.png)

## Source

[copy_constructor.cpp](copy_constructor.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
c1.a = 5
c2.a = 10
c3.a = 15
```

## Build and run

To build `copy_constructor` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start copy_constructor.sln
```

Select `copy_constructor` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./copy_constructor.xcodeproj
```

Select `copy_constructor` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./copy_constructor
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `copy_constructor` folder and open it.
* Build and Run `copy_constructor` project.
