# function_without_param_and_return

Modern C++ course `function_without_param_and_return` example.

![function_without_param_and_return](../../../../docs/pictures/language_basics/function_without_param_and_return.png)

## Source

[function_without_param_and_return.cpp](function_without_param_and_return.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
pi = 3.14159
```

## Build and run

To build `function_without_param_and_return` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start function_without_param_and_return.sln
```

Select `function_without_param_and_return` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./function_without_param_and_return.xcodeproj
```

Select `function_without_param_and_return` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./function_without_param_and_return
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `function_without_param_and_return` folder and open it.
* Build and Run `function_without_param_and_return` project.