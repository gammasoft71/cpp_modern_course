# my_first_class

Modern C++ course `my_first_class` example.

![my_first_class](../../../../docs/pictures/object_oriented_programming/my_first_class.png)

## Source

[my_first_class.cpp](my_first_class.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
my_obj.a = 4
```

## Build and run

To build `my_first_class` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start my_first_class.sln
```

Select `my_first_class` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./my_first_class.xcodeproj
```

Select `my_first_class` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./my_first_class
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `my_first_class` folder and open it.
* Build and Run `my_first_class` project.
