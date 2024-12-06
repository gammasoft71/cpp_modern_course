# separating_the_interface

Modern C++ course `separating_the_interface` example.

![separating_the_interface](../../../../docs/pictures/object_oriented_programming/separating_the_interface.png)

## Source

[my_class.hpp](my_class.hpp)

[my_class.cpp](my_class.cpp)

[main.cpp](main.cpp)

[fun.cpp](fun.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
my_obj.a = 4
```

## Build and run

To build `separating_the_interface` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start separating_the_interface.sln
```

Select `separating_the_interface` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./separating_the_interface.xcodeproj
```

Select `separating_the_interface` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./separating_the_interface
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `separating_the_interface` folder and open it.
* Build and Run `separating_the_interface` project.
