//
// Created by sukesh on 7/7/20.
//

#ifndef ANDROID_NATIVE_GL_SAMPLE_LOG_H
#define ANDROID_NATIVE_GL_SAMPLE_LOG_H

#define LOG_TAG "EglNativeSample"

#include <android/log.h>

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#endif //ANDROID_NATIVE_GL_SAMPLE_LOG_H
