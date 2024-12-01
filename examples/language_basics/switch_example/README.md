# switch_example

Modern C++ course `switch_example` example.

![switch_example](../../../docs/pictures/language_basics/switch_example.png)

## Source

[switch_example.cpp](switch_example.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
Bonjour
```

## Build and run

To build `switch_example` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start switch_example.sln
```

Select `switch_example` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./switch_example.xcodeproj
```

Select `switch_example` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./switch_example
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `switch_example` folder and open it.
* Build and Run `switch_example` project.
