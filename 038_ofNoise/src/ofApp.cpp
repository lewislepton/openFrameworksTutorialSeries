#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  speedx.resize(AMOUNT);
  speedy.resize(AMOUNT);
  for (int i = 0; i < AMOUNT; i++) {
    speedx[i] = ofRandom(0.001, 0.9);
    speedy[i] = ofRandom(0.001, 0.9);
  }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  float time = ofGetElapsedTimef();
  for (int i = 0; i < AMOUNT; i++) {
    float x = ofGetWidth() * ofNoise(time * speedx[i]);
    float y = ofGetHeight() * ofNoise(time * speedy[i]);
    
    ofDrawCircle(x, y, 32);
  }
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
