//
//  MP4Encoder.hpp
//  demo
//
//  Created by Topsky on 2020/3/11.
//  Copyright © 2020 Topsky. All rights reserved.
//

#ifndef MP4Encoder_hpp
#define MP4Encoder_hpp

#include <stdio.h>
#include "mp4v2.h"

  
class MP4Encoder
{

public:
    int packet2Mp4(const char *inputFile, const char *outputFiles);
    char * printfCurrentTime(void);
    int getNalu(FILE *pFile, unsigned char *pNalu);
};

#endif /* MP4Encoder_hpp */
