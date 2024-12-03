# while_loop_syntax

Modern C++ course `while_loop_syntax` example.

![while_loop_syntax](../../../../docs/pictures/language_basics/while_loop_syntax.png)

## Source

[while_loop_syntax.cpp](while_loop_syntax.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
while loop syntax
```

## Build and run

To build `while_loop_syntax` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start while_loop_syntax.sln
```

Select `while_loop_syntax` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./while_loop_syntax.xcodeproj
```

Select `while_loop_syntax` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./while_loop_syntax
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `while_loop_syntax` folder and open it.
* Build and Run `while_loop_syntax` project.
