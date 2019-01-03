package com.zhangjunling.ndk_environment_gradle;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("helloworld");
    }

    private TextView mDataView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        initView();
    }

    private void initView() {
        mDataView = (TextView) this.findViewById(R.id.tv_data);
        mDataView.setText(getStrFromNative());
    }

    private native String getStrFromNative();
}
