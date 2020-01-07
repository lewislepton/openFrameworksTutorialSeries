#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  gui.setup();
  gui.add(uiPosition.set("position", ofVec3f(0, 0, 0), ofVec3f(-300, -300, -300), ofVec3f(300, 300, 300)));
}

//--------------------------------------------------------------
void ofApp::update(){
  light.setPosition(uiPosition->x, uiPosition->y, uiPosition->z);
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofEnableDepthTest();
  light.enable();
  camera.begin();
  ofDrawSphere(uiPosition->x, uiPosition->y, uiPosition->z, 32);
  ofDrawBox(0, 0, 0, 128);
  camera.end();
  light.disable();
  ofDisableDepthTest();
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
