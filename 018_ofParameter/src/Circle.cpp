//
//  Circle.cpp
//  018_ofParameter
//
//  Created by Lewis Lepton on 29/07/2019.
//

#include "Circle.hpp"

void Circle::setup(){
  params.setName("circle params");
  
  params.add(x.set("x", ofGetWidth() / 2, 0, ofGetWidth()));
  params.add(y.set("y", ofGetHeight() / 2, 0, ofGetHeight()));
  
  params.add(colors.set("colors", ofVec3f(100, 130, 160), ofVec3f(0, 0, 0), ofVec3f(255, 255, 255)));
}
