#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  kinect.open();
}

//--------------------------------------------------------------
void ofApp::update(){
  kinect.update();
  if (kinect.isFrameNew()){
    texture.loadData(kinect.getRgbPixels());
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  texture.draw(0, 0, 960, 540);
}

void ofApp::exit(){
  kinect.close();
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
