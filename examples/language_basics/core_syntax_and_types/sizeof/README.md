# sizeof

Modern C++ course `sizeof` example.

![sizeof](../../../../docs/pictures/language_basics/sizeof.png)

## Source

[sizeof.cpp](sizeof.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
sizeof function
```

## Build and run

To build `sizeof` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start sizeof.sln
```

Select `sizeof` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./sizeof.xcodeproj
```

Select `sizeof` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./sizeof
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `sizeof` folder and open it.
* Build and Run `sizeof` project.
