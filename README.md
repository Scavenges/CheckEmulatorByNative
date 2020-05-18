## CheckEmulatorInNDK

This repo is seppoed to check whether you are running in emlulator.


- [x] I would call java from native code to check whether current device is emulator.

- [x] check is debug mode with CMAKE_BUILD_TYPE and NDK_DEBUG of macro-definition,if here is debug mode i dont do anything.

```
CMAKE_BUILD_TYPE 	from	cmake_build_command.txt 
NDK_DEBUG 		from	ndkBuild_build_command.txt
```




## Build

1.android studio 3.0.

2.add a line code to `local.properties`
```
ndk.dir=/xxx/xxx/xx
```

You can run directly without modifying any code, i thought that it is no error.
But i dont think there is no bugs when you run code in some devices.
If you get the wrong result value, it is that you are running on the phone but you get the true value.



## journal:
1.[Mibox is suppoed be a emulator](https://github.com/BruceWind/AESJniEncrypt/issues/32)。(author of this issue no more reply,if you got same problem，plese debug native code.)