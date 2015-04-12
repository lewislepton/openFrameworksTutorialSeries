//
//  VideoClass.cpp
//  018classesWithVideo
//
//  Created by lewis lepton on 10/04/2015.
//
//

#include "VideoClass.h"

void VideoClass::setup(){
    video.loadMovie("drClaw.mp4");
    video.setVolume(0.3);
}

void VideoClass::update(){
    video.update();
}

void VideoClass::draw(){
    video.draw(100, 100, 400, 400);
}

void VideoClass::keyPressed(int key){
    switch (key) {
        case ' ':
            video.play();
        break;
        
        case OF_KEY_LEFT:
            video.previousFrame();
        break;
            
        case OF_KEY_RIGHT:
            video.nextFrame();
        break;
            
        case 'a':
            video.stop();
        break;
    }
}