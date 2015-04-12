//
//  SoundClass.cpp
//  017classesSound
//
//  Created by lewis lepton on 10/04/2015.
//
//

#include "SoundClass.h"

void SoundClass::setup(){
    drums.loadSound("drums.wav");
    drums.setVolume(0.3);
    drums.setLoop(true);
}

void SoundClass::keyPressed(int key){
    switch (key) {
        case ' ':
            drums.play();
        break;
            
        case OF_KEY_LEFT:
            drums.setSpeed(-1.0);
        break;
            
        case OF_KEY_RIGHT:
            drums.setSpeed(1.0);
        break;
            
        case 'a':
            drums.stop();
        break;
    }
}