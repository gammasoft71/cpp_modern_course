# more_concrete_example

Modern C++ course `more_concrete_example` example.

![more_concrete_example](../../../docs/pictures/language_basics/more_concrete_example.png)

## Source

[more_concrete_example.cpp](more_concrete_example.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
more_concrete_example function
```

## Build and run

To build `more_concrete_example` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start more_concrete_example.sln
```

Select `more_concrete_example` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./more_concrete_example.xcodeproj
```

Select `more_concrete_example` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./more_concrete_example
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `more_concrete_example` folder and open it.
* Build and Run `more_concrete_example` project.
