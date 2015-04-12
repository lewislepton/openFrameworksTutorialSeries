//
//  PlanetClass.h
//  030projectOrbit
//
//  Created by lewis lepton on 12/04/2015.
//
//

#ifndef ___30projectOrbit__PlanetClass__
#define ___30projectOrbit__PlanetClass__

#include "ofMain.h"

class PlanetClass{
public:
    void setup();
    void update();
    void draw();
    
    ofParameterGroup planetGroup;
    ofParameter<float> rotateSpeed;
    ofParameter<float> posX;
    ofParameter<float> posY;
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    
    float rotation = 0.0;
};

#endif /* defined(___30projectOrbit__PlanetClass__) */
