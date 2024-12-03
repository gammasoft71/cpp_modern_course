# preprocessor_function

Modern C++ course `preprocessor_function` example.

![preprocessor_function](../../../../docs/pictures/language_basics/preprocessor_function.png)

## Source

[preprocessor_function.cpp](preprocessor_function.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
false
true
```

## Build and run

To build `preprocessor_function` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start preprocessor_function.sln
```

Select `preprocessor_function` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./preprocessor_function.xcodeproj
```

Select `preprocessor_function` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./preprocessor_function
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `preprocessor_function` folder and open it.
* Build and Run `preprocessor_function` project.
