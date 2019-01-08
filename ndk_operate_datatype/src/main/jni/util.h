//
// Created by camdora on 18-1-20.
//
#include <ctype.h>
#include <jni.h>
#include <stddef.h>
#ifndef NDK_HELLOWORK_UTIL_H
#define NDK_HELLOWORK_UTIL_H

char *strupr(char *str){
    char *orign=str;
    for (; *str!='\0'; str++)
        *str = toupper(*str);
    return orign;
}


void ThrowExceptionByPackageName(JNIEnv *env, const char *name, const char *msg) {
    // 查找异常类
    jclass cls = env->FindClass(name);
    /* 如果这个异常类没有找到，VM会抛出一个NowClassDefFoundError异常 */
    if (cls != NULL) {
        env->ThrowNew(cls, msg);  // 抛出指定名字的异常
    }
    /* 释放局部引用 */
    env->DeleteLocalRef(cls);
}
#endif //NDK_HELLOWORK_UTIL_H
