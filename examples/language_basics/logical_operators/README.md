# logical_operators

Modern C++ course `logical_operators` example.

![logical_operators](../../../docs/pictures/language_basics/logical_operators.png)

## Source

[logical_operators.cpp](logical_operators.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
a = true
b = false
c = false
d = true
e = false
```

## Build and run

To build `logical_operators` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start logical_operators.sln
```

Select `logical_operators` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./logical_operators.xcodeproj
```

Select `logical_operators` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./logical_operators
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `logical_operators` folder and open it.
* Build and Run `logical_operators` project.
