# range_based_loop_example

Modern C++ course `range_based_loop_example` example.

![range_based_loop_example](../../../docs/pictures/language_basics/range_based_loop_example.png)

## Source

[range_based_loop_example.cpp](range_based_loop_example.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
sum = 10
```

## Build and run

To build `range_based_loop_example` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start range_based_loop_example.sln
```

Select `range_based_loop_example` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./range_based_loop_example.xcodeproj
```

Select `range_based_loop_example` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./range_based_loop_example
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `range_based_loop_example` folder and open it.
* Build and Run `range_based_loop_example` project.
