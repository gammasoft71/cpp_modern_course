# assert

Modern C++ course `assert` example.

![assert](../../../../docs/pictures/language_basics/assert.png)

## Source

[assert.cpp](assert.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
result = 3
result = Assertion failed: (a > .0), function f, file assert.cpp, line 7.
```

## Build and run

To build `assert` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start assert.sln
```

Select `assert` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./assert.xcodeproj
```

Select `assert` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./assert
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `assert` folder and open it.
* Build and Run `assert` project.
