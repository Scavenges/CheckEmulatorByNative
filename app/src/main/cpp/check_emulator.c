//
// Created by wei on 17-12-4.
//
#include "check_emulator.h"

JNIEXPORT jint JNICALL  check(JNIEnv *env, jobject context) {

// 这里是模仿java代码的检查是否为模拟器 必要参数 context


    return isdebug();
}

