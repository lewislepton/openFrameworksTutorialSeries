#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  kinect.open();
  haar.setup("haarcascade_frontalface_default.xml");
  haar.setScaleHaar(2);
}

//--------------------------------------------------------------
void ofApp::update(){
  kinect.update();
  if (kinect.isFrameNew()){
    color.setFromPixels(kinect.getRgbPixels());
    color.resize(960, 540);
    gray = color;
    haar.findHaarObjects(gray);
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  color.draw(0, 0, 960, 540);
  for (int i = 0; i < haar.blobs.size(); i++) {
    ofSetColor(255);
    ofNoFill();
    ofDrawRectangle(haar.blobs[i].boundingRect);
  }
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
