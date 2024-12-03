# inline_keyword

Modern C++ course `inline_keyword` example.

![inline_keyword](../../../../docs/pictures/language_basics/inline_keyword.png)

## Source

[inline_keyword.cpp](inline_keyword.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
mult(4, 3) = 12
```

## Build and run

To build `inline_keyword` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start inline_keyword.sln
```

Select `inline_keyword` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./inline_keyword.xcodeproj
```

Select `inline_keyword` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./inline_keyword
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `inline_keyword` folder and open it.
* Build and Run `inline_keyword` project.
