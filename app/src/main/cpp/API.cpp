//
// Created by sukesh on 6/7/20.
//

#include "API.h"
#include "Renderer.h"

Renderer *renderer;

extern "C" {

JNIEXPORT void JNICALL
Java_com_example_glwireframe_NativeRenderer_ondraw(JNIEnv *env, jobject thiz) {
    renderer->draw();
}

JNIEXPORT void JNICALL
Java_com_example_glwireframe_NativeRenderer_onsurfacecreated(JNIEnv *env, jobject thiz) {
    renderer = new Renderer();
}

JNIEXPORT void JNICALL
Java_com_example_glwireframe_NativeRenderer_resize(JNIEnv *env, jobject thiz, jint width,
                                                   jint height) {
    renderer->resize(width, height);
}

}