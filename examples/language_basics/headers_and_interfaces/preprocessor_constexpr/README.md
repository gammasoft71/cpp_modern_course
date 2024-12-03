# preprocessor_constexpr

Modern C++ course `preprocessor_constexpr` example.

![preprocessor_constexpr](../../../../docs/pictures/language_basics/preprocessor_constexpr.png)

## Source

[preprocessor_constexpr.cpp](preprocessor_constexpr.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
The answer to the ultimate question of life is '42'.
```

## Build and run

To build `preprocessor_constexpr` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start preprocessor_constexpr.sln
```

Select `preprocessor_constexpr` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./preprocessor_constexpr.xcodeproj
```

Select `preprocessor_constexpr` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./preprocessor_constexpr
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `preprocessor_constexpr` folder and open it.
* Build and Run `preprocessor_constexpr` project.
