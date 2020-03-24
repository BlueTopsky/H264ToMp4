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
