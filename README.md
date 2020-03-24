# H264ToMp4
h264视频编码成mp4

本Demo基于mp4v2实现，只需要传入视频文件路径就可以轻松转换了。
```
MP4Encoder mp4Encoder;
if (mp4Encoder.packet2Mp4("/Users/topsky/Desktop/H264/demo/ass.h264", "/Users/topsky/Desktop/H264/demo/ass.mp4")) {
    printf("Error:Packet to Mp4 fail.\n");
    return -1;
}
```

1. mp4v2源码下载地址：http://www.codeforge.cn/article/259182 
2. 编译步骤参照INSTALL文件，生成的libmp4v2.a在目录.libs中，so库需要用ndk编译(可以参考https://www.jianshu.com/p/a29831ab90e5)，编译后的库已经上传至项目中
