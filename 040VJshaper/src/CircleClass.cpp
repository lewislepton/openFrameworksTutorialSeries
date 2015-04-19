//
//  CircleClass.cpp
//  040VJshaper
//
//  Created by lewis lepton on 19/04/2015.
//
//

#include "CircleClass.h"

void CircleClass::setup(){
    circleParams.add(circleRes.set("res", 60, 3, 60));
    circleParams.add(release.set("release", 0.3, 0.0, 1.0));
    circleParams.add(size.set("size", 9.0, 0.0, 30.0));
    
    circleParams.add(posX.set("posX", 0, -900, 900));
    circleParams.add(posY.set("posY", 0, -900, 900));
    
    circleParams.add(rotateX.set("rotX", 0.0, -1.0, 1.0));
    circleParams.add(rotateY.set("rotY", 0.0, -1.0, 1.0));
    circleParams.add(rotateZ.set("rotZ", 0.0, -1.0, 1.0));
    
    circleParams.add(red.set("red", 255, 0, 255));
    circleParams.add(green.set("green", 255, 0, 255));
    circleParams.add(blue.set("blue", 255, 0, 255));
    circleParams.add(alpha.set("alpha", 255, 0, 255));
    
    fftSmooth = new float [8192];
    for (int i = 0; i < 8192; i++) {
        fftSmooth[i] = 0;
    }
    bands = 64;
}

void CircleClass::update(){
    rotationX = rotationX + rotateX;
    rotationY = rotationY + rotateY;
    rotationZ = rotationZ + rotateZ;
    
    float * value = ofSoundGetSpectrum(bands);
    for (int i = 0; i < bands; i++) {
        fftSmooth[i] *= release;
        if (fftSmooth[i] < value[i]) {
            fftSmooth[i] = value[i];
        }
    }
}

void CircleClass::draw(){
    ofPushMatrix();
    ofSetCircleResolution(circleRes);
    for (int i = 0; i < bands; i++) {
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotateX(rotationX);
        ofRotateY(rotationY);
        ofRotateZ(rotationZ);
        ofSetColor(red, green, blue, alpha);
        ofCircle(posX, posY, -(fftSmooth[i] * 60) * size);
    }
    ofPopMatrix();
}