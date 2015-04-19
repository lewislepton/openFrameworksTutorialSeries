//
//  CircleClass.h
//  040VJshaper
//
//  Created by lewis lepton on 19/04/2015.
//
//

#ifndef ___40VJshaper__CircleClass__
#define ___40VJshaper__CircleClass__

#include "ofMain.h"

class CircleClass{
public:
    void setup();
    void update();
    void draw();
    
    ofParameterGroup circleParams;
    ofParameter<int> circleRes;
    ofParameter<float> release;
    ofParameter<float> size;
    
    ofParameter<int> posX;
    ofParameter<int> posY;
    
    ofParameter<float> rotateX;
    ofParameter<float> rotateY;
    ofParameter<float> rotateZ;
    
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    ofParameter<int> alpha;
    
    float rotationX = 0.0;
    float rotationY = 0.0;
    float rotationZ = 0.0;
    
    float * fftSmooth;
    int bands;
};

#endif /* defined(___40VJshaper__CircleClass__) */
