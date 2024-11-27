# pointers

Modern C++ course `pointers` example.

## Source

[pointers.cpp](pointers.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
pointers function
```

## Build and run

To build `pointers` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start pointers.sln
```

Select `pointers` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./pointers.xcodeproj
```

Select `pointers` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./pointers
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `pointers` folder and open it.
* Build and Run `pointers` project.
