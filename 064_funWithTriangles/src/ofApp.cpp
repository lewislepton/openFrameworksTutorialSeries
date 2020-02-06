#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  gui.setup();
  gui.add(uiPosition.set("position", ofVec2f(0), ofVec2f(0),
                          ofVec2f(ofGetWidth(), ofGetHeight())));
  gui.add(uiAmount.set("amount", 3, 1, 64));
  gui.add(uiStep.set("step", ofVec2f(0), ofVec2f(0), ofVec2f(300)));
  gui.add(uiRotate.set("rotate", ofVec3f(0), ofVec3f(-180), ofVec3f(180)));
  gui.add(uiShift.set("shift", ofVec2f(0), ofVec2f(0), ofVec2f(300)));
  gui.add(uiSize.set("size", ofVec2f(6), ofVec2f(0), ofVec2f(30)));
}

//--------------------------------------------------------------
void ofApp::update(){
  
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofPushMatrix();
  ofTranslate(uiPosition->x, uiPosition->y);
  for (int i = 0; i < uiAmount; i++) {
    ofPushMatrix();
    ofTranslate(i * uiStep->x, i * uiStep->y);
    ofRotateXDeg(i * uiRotate->x);
    ofRotateYDeg(i * uiRotate->y);
    ofRotateZDeg(i * uiRotate->z);
    ofTranslate(i * uiShift->x, i * uiShift->y);
    ofScale(uiSize->x, uiSize->y);
    // ofDrawTriangle(0, 0, -16, 32, 16, 32);
    ofBeginShape();
    ofVertex(0, 0);
    ofVertex(-16, 32);
    ofVertex(16, 32);
    ofEndShape();
    ofPopMatrix();
  }
  ofPopMatrix();
  gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
