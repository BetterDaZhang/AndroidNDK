//
// Created by zhangjunling on 19-1-2.
//

#include "util.h"
#include "log.h"
#include "com_zhangjunling_ndk_operate_datatype_MainActivity.h"

JNIEXPORT jstring JNICALL Java_com_zhangjunling_ndk_1operate_1datatype_MainActivity_getHelloworldStrFromJni
  (JNIEnv *env, jobject obj){
      return env->NewStringUTF("Hello. I'm from native");
}

