# auto_without_auto

Modern C++ course `auto_without_auto` example.

![auto_without_auto](../../../../docs/pictures/language_basics/auto_without_auto.png)

## Source

[auto_without_auto.cpp](auto_without_auto.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
a = 65
b = 4
```

## Build and run

To build `auto_without_auto` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start auto_without_auto.sln
```

Select `auto_without_auto` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./auto_without_auto.xcodeproj
```

Select `auto_without_auto` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./auto_without_auto
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `auto_without_auto` folder and open it.
* Build and Run `auto_without_auto` project.
