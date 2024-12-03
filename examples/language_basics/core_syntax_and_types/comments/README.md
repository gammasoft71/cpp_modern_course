# comments

Modern C++ course `commants` example.

![comments](../../../../docs/pictures/language_basics/comments.png)

## Source

[comments.cpp](comments.cpp)

[CMakeLists.txt](CMakeLists.txt)

## Output

```
comments
```

## Build and run

To build `comments` project, open "Terminal" and type following lines:

### Windows :

``` shell
mkdir build && cd build
cmake .. 
start comments.sln
```

Select `comments` project and type Ctrl+F5 to build and run it.

### macOS :

``` shell
mkdir build && cd build
cmake .. -G "Xcode"
open ./comments.xcodeproj
```

Select `comments` project and type Cmd+R to build and run it.

### Linux :

``` shell
mkdir build && cd build
cmake .. 
cmake --build . --config Debug
./comments
```

### Linux with Visual Studio Code :

* Launch Visual Studio Code.
* Select `File/Open Folder...` menu.
* Select `comments` folder and open it.
* Build and Run `comments` project.
