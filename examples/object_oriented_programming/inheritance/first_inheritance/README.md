# first_inheritance

Modern C++ course `first_inheritance` example.

![first_inheritance](../../../../docs/pictures/object_oriented_programming/first_inheritance.png)

## Source

[first_inheritance.cpp](first_inheritance.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
i = 9
```

## Build and run

To build `first_inheritance` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start first_inheritance.sln
```

Select `first_inheritance` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./first_inheritance.xcodeproj
```

Select `first_inheritance` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./first_inheritance
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `first_inheritance` folder and open it.
* Build and Run `first_inheritance` project.
