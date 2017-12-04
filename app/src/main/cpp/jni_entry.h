// 获取数组的大小
# define NELEM(x) ((int) (sizeof(x) / sizeof((x)[0])))
// 指定要注册的类，对应完整的java类名
#define JNIREG_CLASS "com/androidyuan/check_emulator_in_ndk/MainActivity"


#ifndef CHECK_EMULATOR_IN_NDK_JNI_MAP_H
#define CHECK_EMULATOR_IN_NDK_JNI_MAP_H

#include <jni.h>
#include <string.h>
#include "check_emulator.h"


// Java和JNI函数的绑定表
static JNINativeMethod method_table[] = {
        { "check", "(Ljava/lang/Object;)I",(void*)check }
};

#endif //CHECK_EMULATOR_IN_NDK_JNI_MAP_H
