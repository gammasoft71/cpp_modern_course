# nullptr

Modern C++ course `nullptr` example.

![nullptr](../../../../docs/pictures/language_basics/nullptr.png)

## Source

[nullptr.cpp](nullptr.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
nullptr function
```

## Build and run

To build `nullptr` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start nullptr.sln
```

Select `nullptr` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./nullptr.xcodeproj
```

Select `nullptr` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./nullptr
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `nullptr` folder and open it.
* Build and Run `nullptr` project.
