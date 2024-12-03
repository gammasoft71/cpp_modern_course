# auto_declarations

Modern C++ course `auto_declarations` example.

![auto_declarations](../../../../docs/pictures/language_basics/auto_declarations.png)

## Source

[auto_declarations.cpp](auto_declarations.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
auto declarations
```

## Build and run

To build `auto_declarations` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start auto_declarations.sln
```

Select `auto_declarations` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./auto_declarations.xcodeproj
```

Select `auto_declarations` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./auto_declarations
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `auto_declarations` folder and open it.
* Build and Run `auto_declarations` project.
