# while_loop_example

Modern C++ course `while_loop_example` example.

![while_loop_example](../../../docs/pictures/language_basics/while_loop_example.png)

## Source

[while_loop_example.cpp](while_loop_example.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
2 4 6 8 
```

## Build and run

To build `while_loop_example` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start while_loop_example.sln
```

Select `while_loop_example` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./while_loop_example.xcodeproj
```

Select `while_loop_example` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./while_loop_example
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `while_loop_example` folder and open it.
* Build and Run `while_loop_example` project.
