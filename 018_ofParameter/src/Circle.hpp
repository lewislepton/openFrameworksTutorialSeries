//
//  Circle.hpp
//  018_ofParameter
//
//  Created by Lewis Lepton on 29/07/2019.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "ofMain.h"

class Circle {
public:
  void setup();
  
  ofParameterGroup params;
  ofParameter<ofVec3f> colors;
  ofParameter<int> x;
  ofParameter<int> y;
};

#endif /* Circle_hpp */
