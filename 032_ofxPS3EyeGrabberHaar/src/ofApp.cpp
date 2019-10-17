#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  camera.setGrabber(std::make_shared<ofxPS3EyeGrabber>());
  camera.setup(640, 480);
  
  color.allocate(camera.getWidth(), camera.getHeight());
  gray.allocate(camera.getWidth(), camera.getHeight());
  
  haar.setup("haarcascade_frontalface_default.xml");
  haar.setScaleHaar(2);
}

//--------------------------------------------------------------
void ofApp::update(){
  camera.update();
  
  if (camera.isFrameNew()){
    color.setFromPixels(camera.getPixels());
    gray = color;
    haar.findHaarObjects(gray);
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  color.draw(0, 0);
  
  for (int i = 0; i < haar.blobs.size(); i++) {
    ofSetColor(255);
    ofNoFill();
    ofDrawRectangle(haar.blobs[i].boundingRect);
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
