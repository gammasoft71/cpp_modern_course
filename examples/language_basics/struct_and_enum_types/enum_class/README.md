# enum_class

Modern C++ course `enum_class` example.

![enum_class](../../../../docs/pictures/language_basics/enum_class.png)

## Source

[enum_class.cpp](enum_class.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
enum_class function
```

## Build and run

To build `enum_class` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start enum_class.sln
```

Select `enum_class` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./enum_class.xcodeproj
```

Select `enum_class` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./enum_class
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `enum_class` folder and open it.
* Build and Run `enum_class` project.
