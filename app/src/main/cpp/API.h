//
// Created by sukesh on 6/7/20.
//

#ifndef ANDROID_NATIVE_GL_SAMPLE_API_H
#define ANDROID_NATIVE_GL_SAMPLE_API_H

#include "jni.h"

extern "C" {
JNIEXPORT void JNICALL
    Java_com_example_glwireframe_NativeRenderer_ondraw(JNIEnv *env, jobject thiz);

JNIEXPORT void JNICALL
    Java_com_example_glwireframe_NativeRenderer_onsurfacecreated(JNIEnv *env, jobject thiz);

JNIEXPORT void JNICALL
    Java_com_example_glwireframe_NativeRenderer_resize(JNIEnv *env, jobject thiz, jint width,
                                                       jint height);
};

#endif //ANDROID_NATIVE_GL_SAMPLE_API_H
