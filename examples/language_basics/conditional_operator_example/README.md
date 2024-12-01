# conditional_operator_example

Modern C++ course `conditional_operator_example` example.

![conditional_operator_example](../../../docs/pictures/language_basics/conditional_operator_example.png)

## Source

[conditional_operator_example.cpp](conditional_operator_example.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
charge = -1
```

## Build and run

To build `conditional_operator_example` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start conditional_operator_example.sln
```

Select `conditional_operator_example` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./conditional_operator_example.xcodeproj
```

Select `conditional_operator_example` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./conditional_operator_example
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `conditional_operator_example` folder and open it.
* Build and Run `conditional_operator_example` project.
