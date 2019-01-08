//
// Created by camdora on 18-1-23.
//
#include <android/log.h>

#ifndef NDK_HELLOWORK_LOG_H
#define NDK_HELLOWORK_LOG_H

#define LOGE(format, ...)  __android_log_print(ANDROID_LOG_ERROR, "(>_<)", format, ##__VA_ARGS__)
#define LOGD(format, ...)  __android_log_print(ANDROID_LOG_DEBUG, "(>_<)", format, ##__VA_ARGS__)
#define LOGI(format, ...)  __android_log_print(ANDROID_LOG_INFO, "zhangjunling", format, ##__VA_ARGS__)

#endif //NDK_HELLOWORK_LOG_H
