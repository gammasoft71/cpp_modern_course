# copy_constructor_rule_of_3

Modern C++ course `copy_constructor_rule_of_3` example.

![copy_constructor_rule_of_3](../../../../docs/pictures/object_oriented_programming/copy_constructor_rule_of_3.png)

## Source

[copy_constructor_rule_of_3.cpp](copy_constructor_rule_of_3.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
c1.value = 10
c2.value = 10
```

## Build and run

To build `copy_constructor_rule_of_3` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start copy_constructor_rule_of_3.sln
```

Select `copy_constructor_rule_of_3` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./copy_constructor_rule_of_3.xcodeproj
```

Select `copy_constructor_rule_of_3` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./copy_constructor_rule_of_3
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `copy_constructor_rule_of_3` folder and open it.
* Build and Run `copy_constructor_rule_of_3` project.
