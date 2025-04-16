The goal of this repo is to generate the minimum reproducible example of a bug that I am not able to fix currently.

Long story short: linking an executable to the static `libssh2`, but not to a shared library to the static `libssh2` on Windows.
Using `MSVC 2022`.

See `CMakeLists.txt`

Error output:
```
[build]      Creating library C:/GitHub/test-libssh2/build/Debug/libssh2-test.lib and object C:/GitHub/test-libssh2/build/Debug/libssh2-test.exp
[build] lib.obj : error LNK2019: unresolved external symbol __imp_libssh2_session_init_ex referenced in function test [C:\GitHub\test-libssh2\build\libssh2-test.vcxproj]
[build] C:\GitHub\test-libssh2\build\Debug\libssh2-test.dll : fatal error LNK1120: 1 unresolved externals [C:\GitHub\test-libssh2\build\libssh2-test.vcxproj]
[proc] The command: "C:\Program Files\CMake\bin\cmake.EXE" --build c:/GitHub/test-libssh2/build --config Debug --target ALL_BUILD -j 10 -- exited with code: 1
[driver] Build completed: 00:00:32.646
[build] Build finished with exit code 1

```
