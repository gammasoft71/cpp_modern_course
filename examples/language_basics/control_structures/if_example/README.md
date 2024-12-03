# if_example

Modern C++ course `if_example` example.

![if_example](../../../../docs/pictures/language_basics/if_example.png)

## Source

[if_example.cpp](if_example.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
result = 1
```

## Build and run

To build `if_example` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start if_example.sln
```

Select `if_example` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./if_example.xcodeproj
```

Select `if_example` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./if_example
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `if_example` folder and open it.
* Build and Run `if_example` project.
