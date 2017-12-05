## Check_Emulator_In_NDK


- [ ] 在native里 做检查 是否为模拟器，用C调用java;

- [X] native代码里判断是否为debug的so，或者release的so,  通过 CMAKE_BUILD_TYPE 这个参数 判断是否是release还是debug的包;

```
详情 可以参考 cmake_build_command.txt 这个build生成的文件

```




## 编译

代码是可以直接run的,如果想要直接debug native代码,请安装SDK里面的插件.

1.android studio 3.0 版本.


2.local.properties文件里增加 一行
```
ndk.dir=/xxx/xxx/xx
```