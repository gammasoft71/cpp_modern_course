# auto_with_auto

Modern C++ course `auto_with_auto` example.

![auto_with_auto](../../../docs/pictures/language_basics/auto_with_auto.png)

## Source

[auto_with_auto.cpp](auto_with_auto.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
a = 65
b = 4
```

## Build and run

To build `auto_with_auto` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start auto_with_auto.sln
```

Select `auto_with_auto` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./auto_with_auto.xcodeproj
```

Select `auto_with_auto` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./auto_with_auto
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `auto_with_auto` folder and open it.
* Build and Run `auto_with_auto` project.
