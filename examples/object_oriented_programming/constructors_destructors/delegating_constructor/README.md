# delegating_constructor

Modern C++ course `delegating_constructor` example.

![delegating_constructor](../../../../docs/pictures/object_oriented_programming/delegating_constructor.png)

## Source

[delegating_constructor.cpp](delegating_constructor.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
Delegating constructor
```

## Build and run

To build `delegating_constructor` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start delegating_constructor.sln
```

Select `delegating_constructor` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./delegating_constructor.xcodeproj
```

Select `delegating_constructor` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./delegating_constructor
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `delegating_constructor` folder and open it.
* Build and Run `delegating_constructor` project.
