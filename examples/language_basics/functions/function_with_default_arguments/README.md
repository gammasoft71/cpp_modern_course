# function_with_default_arguments

Modern C++ course `function_with_default_arguments` example.

![function_with_default_arguments](../../../../docs/pictures/language_basics/function_with_default_arguments.png)

## Source

[function_with_default_arguments.cpp](function_with_default_arguments.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
result = 5
result = 4
result = 7
```

## Build and run

To build `function_with_default_arguments` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start function_with_default_arguments.sln
```

Select `function_with_default_arguments` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./function_with_default_arguments.xcodeproj
```

Select `function_with_default_arguments` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./function_with_default_arguments
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `function_with_default_arguments` folder and open it.
* Build and Run `function_with_default_arguments` project.
