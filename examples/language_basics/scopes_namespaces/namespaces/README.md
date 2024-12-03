# namespaces

Modern C++ course `namespaces` example.

![namespaces](../../../../docs/pictures/language_basics/namespaces.png)

## Source

[namespaces.cpp](namespaces.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
namespaces function
```

## Build and run

To build `namespaces` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start namespaces.sln
```

Select `namespaces` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./namespaces.xcodeproj
```

Select `namespaces` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./namespaces
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `namespaces` folder and open it.
* Build and Run `namespaces` project.
