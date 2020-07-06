//
// Created by sukesh on 6/7/20.
//

#ifndef ANDROID_NATIVE_GL_SAMPLE_RENDERER_H
#define ANDROID_NATIVE_GL_SAMPLE_RENDERER_H

class Renderer{
public:
    Renderer();
    void draw();
    void resize(int width, int height);
private:
    bool initialize();
};

#endif //ANDROID_NATIVE_GL_SAMPLE_RENDERER_H
