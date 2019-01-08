package com.zhangjunling.ndk_operate_datatype;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private Button mHelloJniButton;
    private TextView mContentView;

    static {
        System.loadLibrary("helloworld");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        initView();
    }

    private void initView() {
        mContentView = this.findViewById(R.id.tv_content);
        mHelloJniButton = this.findViewById(R.id.bt_helloworld);

        mHelloJniButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                mContentView.setText(getHelloworldStrFromJni());
            }
        });
    }

    private native String getHelloworldStrFromJni();
}
