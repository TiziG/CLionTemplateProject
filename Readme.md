## Dependencies
CUTE Test framework
https://github.com/PeterSommerlad/CUTE

### Installation
1. Download the whole cute git repo and place it inside `ProjectFolder/cute_lib/`.

Your Structure should then look something like this:
```
ProjectFolder/
    .idea/
    cute_lib/
        cute/
        cute_tests/
    libA/
    CMakeLists.txt
    main.cpp
    test.cpp
```

## Usage
Each library you want to test needs to be manually linked to the CuteTest target.

Check `/CMakeList.txt` to see how it's done.
