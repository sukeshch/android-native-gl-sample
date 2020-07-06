package com.example.glwireframe;

public class NativeRenderer {
    static{
        System.loadLibrary("nativegl");
    }

    public native void onsurfacecreated();
    public native void resize(int width, int height);
    public native void ondraw();
}
