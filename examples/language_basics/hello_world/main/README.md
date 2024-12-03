# main

Modern C++ course `main` example.

![main](../../../../docs/pictures/language_basics/main.png)

## Source

[main.cpp](main.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
main function
```

## Build and run

To build `main` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start main.sln
```

Select `main` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./main.xcodeproj
```

Select `main` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./main
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `main` folder and open it.
* Build and Run `main` project.
