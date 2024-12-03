# if_syntax

Modern C++ course `if_syntax` example.

![if_syntax](../../../../docs/pictures/language_basics/if_syntax.png)

## Source

[if_syntax.cpp](if_syntax.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
If syntax
```

## Build and run

To build `if_syntax` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start if_syntax.sln
```

Select `if_syntax` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./if_syntax.xcodeproj
```

Select `if_syntax` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./if_syntax
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `if_syntax` folder and open it.
* Build and Run `if_syntax` project.
