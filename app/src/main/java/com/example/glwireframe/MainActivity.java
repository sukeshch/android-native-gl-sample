package com.example.glwireframe;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        ExampleSurfaceView exampleSurfaceView = new ExampleSurfaceView(this);
        setContentView(exampleSurfaceView);
    }
}
