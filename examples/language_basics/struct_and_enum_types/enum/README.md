# enum

Modern C++ course `enum` example.

![enum](../../../../docs/pictures/language_basics/enum.png)

## Source

[enum.cpp](enum.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
enum function
```

## Build and run

To build `enum` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start enum.sln
```

Select `enum` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./enum.xcodeproj
```

Select `enum` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./enum
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `enum` folder and open it.
* Build and Run `enum` project.
