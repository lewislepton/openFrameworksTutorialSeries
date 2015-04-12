//
//  CircleClass.h
//  024ofParameterGUIClass
//
//  Created by lewis lepton on 11/04/2015.
//
//

#ifndef ___24ofParameterGUIClass__CircleClass__
#define ___24ofParameterGUIClass__CircleClass__

#include "ofMain.h"

class CircleClass{
public:
    void setup();
    void draw();
    
    ofParameterGroup circleParameters;
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    
    ofParameter<int> posX;
    ofParameter<int> posY;
    ofParameter<int> radius;
    
};
#endif /* defined(___24ofParameterGUIClass__CircleClass__) */
