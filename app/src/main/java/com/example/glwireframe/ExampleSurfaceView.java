package com.example.glwireframe;

import android.content.Context;
import android.opengl.GLSurfaceView;

public final class ExampleSurfaceView extends GLSurfaceView {
    private final ExampleRenderer exampleRenderer;

    public ExampleSurfaceView(Context context) {
        super(context);

        this.exampleRenderer = new ExampleRenderer();
        this.setRenderer(this.exampleRenderer);
    }
}
