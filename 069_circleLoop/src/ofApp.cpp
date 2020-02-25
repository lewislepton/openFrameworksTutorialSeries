#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetLineWidth(3);
  ofSetCircleResolution(128);
  
  gui.setup();
  gui.add(uiAmount.set("amount", 1, 1, 30));
  gui.add(uiPower.set("power", ofVec3f(0), ofVec3f(0), ofVec3f(3.0)));
  gui.add(uiRadius.set("radius", 0, 0, 60.0));
  gui.add(uiPosition.set("position",
                          ofVec2f(0),
                          ofVec2f(-ofGetWidth(), -ofGetHeight()),
                          ofVec2f(ofGetWidth(), ofGetHeight())));
}

//--------------------------------------------------------------
void ofApp::update(){
  
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofPushMatrix();
  cam.begin();
  ofTranslate(uiPosition->x, uiPosition->y);
  float radius = uiRadius;
  for (int i = 0; i < uiAmount; i++){
    float noisex = ofNoise((ofGetElapsedTimef() + i) * uiPower->x);
    float noisey = ofNoise((ofGetElapsedTimef() + i) * uiPower->y);
    float noisez = ofNoise((ofGetElapsedTimef() + i) * uiPower->z);
    
    float x = ofGetWidth() / 2 * noisex;
    float y = ofGetHeight() / 2 * noisey;
    float z = ofGetHeight() / 2 * noisez;
    
    ofNoFill();
    ofSetColor(255);
    ofDrawCircle(x, y, z, radius);
    radius += i;
  }
  cam.end();
  ofPopMatrix();
  
  if (bHide){
    gui.draw();
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  bHide = !bHide;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
