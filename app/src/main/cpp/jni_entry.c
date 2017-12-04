/**  不要编辑这个文件  做修改请修改.h 文件
 *   ------------------------  dont edit begin -------------------------------
 */

#include "jni_entry.h"

// 注册native方法到java中
static int registerNativeMethods(JNIEnv* env, const char* className,
                                 JNINativeMethod* gMethods, int numMethods)
{
    jclass clazz;
    clazz = (*env)->FindClass(env, className);
    if (clazz == NULL) {
        return JNI_FALSE;
    }
    if ((*env)->RegisterNatives(env, clazz, gMethods, numMethods) < 0) {
        return JNI_FALSE;
    }

    return JNI_TRUE;
}

int register_ndk_load(JNIEnv *env)
{
    // 调用注册方法
    return registerNativeMethods(env, JNIREG_CLASS,
                                 method_table, NELEM(method_table));
}

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
JNIEnv* env = NULL;
jint result = -1;

if ((*vm)->GetEnv(vm, (void**) &env, JNI_VERSION_1_4) != JNI_OK) {
return result;
}

register_ndk_load(env);

// 返回jni的版本
return JNI_VERSION_1_4;
}



/**
 *   ------------------------  dont edit end -------------------------------
 */