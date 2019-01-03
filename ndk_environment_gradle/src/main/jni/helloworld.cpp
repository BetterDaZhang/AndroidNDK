//
// Created by zhangjunling on 19-1-2.
//
#include "com_zhangjunling_ndk_environment_gradle_MainActivity.h"

JNIEXPORT jstring JNICALL Java_com_zhangjunling_ndk_1environment_1gradle_MainActivity_getStrFromNative
  (JNIEnv *env, jobject obj){
      return env->NewStringUTF("Hello. I'm form native");
}