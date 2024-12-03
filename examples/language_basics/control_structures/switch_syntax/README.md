# switch_syntax

Modern C++ course `switch_syntax` example.

![switch_syntax](../../../../docs/pictures/language_basics/switch_syntax.png)

## Source

[switch_syntax.cpp](switch_syntax.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
Switch syntax
```

## Build and run

To build `switch_syntax` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start switch_syntax.sln
```

Select `switch_syntax` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./switch_syntax.xcodeproj
```

Select `switch_syntax` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./switch_syntax
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `switch_syntax` folder and open it.
* Build and Run `switch_syntax` project.
