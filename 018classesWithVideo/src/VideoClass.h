//
//  VideoClass.h
//  018classesWithVideo
//
//  Created by lewis lepton on 10/04/2015.
//
//

#ifndef ___18classesWithVideo__VideoClass__
#define ___18classesWithVideo__VideoClass__

#include "ofMain.h"

class VideoClass{
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    
    ofVideoPlayer video;
};

#endif /* defined(___18classesWithVideo__VideoClass__) */
