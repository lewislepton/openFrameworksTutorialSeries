#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  gui.setup();
  gui.add(uiWidth.set("width", 0, 0, 64));
  gui.add(uiHeight.set("height", 0, 0, 64));
  gui.add(uiXPower.set("x power", 0, 0, 32));
  gui.add(uiYPower.set("y power", 0, 0, 32));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  ofSetRectMode(OF_RECTMODE_CENTER);
  ofNoFill();
  ofSetLineWidth(2);
  
  for (int x = 0; x < 32; x++) {
    for (int y = 0; y < 32; y++) {
      ofDrawRectangle(x * 64, y * 64, sin(x + ofGetElapsedTimef()) * uiXPower, uiHeight);
      ofDrawRectangle(x * 64, y * 64, uiWidth, sin(y + ofGetElapsedTimef()) * uiYPower);
    }
  }
  
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
