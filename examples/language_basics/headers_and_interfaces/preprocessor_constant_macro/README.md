# preprocessor_constant_macro

Modern C++ course `preprocessor_constant_macro` example.

![preprocessor_constant_macro](../../../../docs/pictures/language_basics/preprocessor_constant_macro.png)

## Source

[preprocessor_constant_macro.cpp](preprocessor_constant_macro.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
The answer to the ultimate question of life is '42'.
```

## Build and run

To build `preprocessor_constant_macro` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start preprocessor_constant_macro.sln
```

Select `preprocessor_constant_macro` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./preprocessor_constant_macro.xcodeproj
```

Select `preprocessor_constant_macro` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./preprocessor_constant_macro
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `preprocessor_constant_macro` folder and open it.
* Build and Run `preprocessor_constant_macro` project.
