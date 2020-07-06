package com.example.glwireframe;
import android.opengl.GLSurfaceView;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

public class ExampleRenderer implements GLSurfaceView.Renderer {
    protected NativeRenderer nativeRenderer = new NativeRenderer();

    @Override
    public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        nativeRenderer.onsurfacecreated();
    }

    @Override
    public void onSurfaceChanged(GL10 gl, int width, int height) {
        nativeRenderer.resize(width, height);
    }

    @Override
    public void onDrawFrame(GL10 gl) {
        nativeRenderer.ondraw();
    }
}
