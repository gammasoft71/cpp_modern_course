# operator_precedences

Modern C++ course `operator_precedences` example.

![operator_precedences](../../../../docs/pictures/language_basics/operator_precedences.png)

## Source

[operator_precedences.cpp](operator_precedences.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
Operator precedences
```

## Build and run

To build `operator_precedences` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start operator_precedences.sln
```

Select `operator_precedences` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./operator_precedences.xcodeproj
```

Select `operator_precedences` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./operator_precedences
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `operator_precedences` folder and open it.
* Build and Run `operator_precedences` project.
