#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  shader.load("shader");
}

//--------------------------------------------------------------
void ofApp::update(){
  float red = sin(ofGetElapsedTimef()) * 2.0;
  shader.begin();
  shader.setUniform1f("u_red", red);
  shader.end();
}

//--------------------------------------------------------------
void ofApp::draw(){
  shader.begin();
  ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
  shader.end();
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
