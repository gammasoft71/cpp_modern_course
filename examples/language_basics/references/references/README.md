# references

Modern C++ course `references` example.

![references](../../../../docs/pictures/language_basics/references.png)

## Source

[references.cpp](references.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
references
```

## Build and run

To build `references` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start references.sln
```

Select `references` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./references.xcodeproj
```

Select `references` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./references
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `references` folder and open it.
* Build and Run `references` project.
