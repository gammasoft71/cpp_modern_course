# struct

Modern C++ course `struct` example.

![struct](../../../docs/pictures/language_basics/struct.png)

## Source

[struct.cpp](struct.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
struct function
```

## Build and run

To build `struct` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start struct.sln
```

Select `struct` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./struct.xcodeproj
```

Select `struct` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./struct
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `struct` folder and open it.
* Build and Run `struct` project.
