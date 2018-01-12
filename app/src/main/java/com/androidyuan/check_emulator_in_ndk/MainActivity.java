package com.androidyuan.check_emulator_in_ndk;

import android.content.Context;
import android.os.Build;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("jni_map");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText(check(this)+" ");
//        tv.setText(DeviceUtil.isEmulator()+" ");

    }


    /**
     * 检查 是模拟器则返回0
     * @param context //TODO  delete the params
     * @return 1:不是模拟器 0:是模拟器
     */
    public native int check(Object context);
}
