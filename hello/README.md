```
mkdir build
cd build
cmake .. -G Ninja
ninja
LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/hello/lib /usr/local/hello/bin/hello
```