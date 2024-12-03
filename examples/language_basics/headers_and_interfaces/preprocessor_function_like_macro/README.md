# preprocessor_function_like_macro

Modern C++ course `preprocessor_function_like_macro` example.

![preprocessor_function_like_macro](../../../../docs/pictures/language_basics/preprocessor_function_like_macro.png)

## Source

[preprocessor_function_like_macro.cpp](preprocessor_function_like_macro.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
24 was not the response
```

## Build and run

To build `preprocessor_function_like_macro` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start preprocessor_function_like_macro.sln
```

Select `preprocessor_function_like_macro` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./preprocessor_function_like_macro.xcodeproj
```

Select `preprocessor_function_like_macro` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./preprocessor_function_like_macro
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `preprocessor_function_like_macro` folder and open it.
* Build and Run `preprocessor_function_like_macro` project.
