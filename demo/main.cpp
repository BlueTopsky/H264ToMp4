//
//  main.cpp
//  demo
//
//  Created by Topsky on 2020/3/11.
//  Copyright © 2020 Topsky. All rights reserved.
//

#include <iostream>
#include "MP4Encoder.hpp"

int main(int argc, const char * argv[]) {

    MP4Encoder mp4Encoder;
    if (mp4Encoder.packet2Mp4("/Users/topsky/Desktop/H264/demo/ass.h264", "/Users/topsky/Desktop/H264/demo/ass.mp4")) {
        printf("Error:Packet to Mp4 fail.\n");
        return -1;
    }
    return 0;
}
