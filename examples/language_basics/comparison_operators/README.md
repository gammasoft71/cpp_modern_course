# comparison_operators

Modern C++ course `comparison_operators` example.

![comparison_operators](../../../docs/pictures/language_basics/comparison_operators.png)

## Source

[comparison_operators.cpp](comparison_operators.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
a = true
b = false
c = false
d = true
e = false
f = true
g = true
```

## Build and run

To build `comparison_operators` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start comparison_operators.sln
```

Select `comparison_operators` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./comparison_operators.xcodeproj
```

Select `comparison_operators` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./comparison_operators
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `comparison_operators` folder and open it.
* Build and Run `comparison_operators` project.
