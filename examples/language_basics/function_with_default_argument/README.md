# function_with_default_argument

Modern C++ course `function_with_default_argument` example.

![function_with_default_argument](../../../docs/pictures/language_basics/function_with_default_argument.png)

## Source

[function_with_default_argument.cpp](function_with_default_argument.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
result = 4
result = 7
```

## Build and run

To build `function_with_default_argument` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start function_with_default_argument.sln
```

Select `function_with_default_argument` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./function_with_default_argument.xcodeproj
```

Select `function_with_default_argument` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./function_with_default_argument
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `function_with_default_argument` folder and open it.
* Build and Run `function_with_default_argument` project.
