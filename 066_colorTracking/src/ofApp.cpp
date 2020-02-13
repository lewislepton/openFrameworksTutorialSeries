#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  kinect.init();
  kinect.open();
  
  contour.setMinAreaRadius(30);
  contour.setMaxAreaRadius(130);
}

//--------------------------------------------------------------
void ofApp::update(){
  kinect.update();
  
  if (kinect.isFrameNew()){
    contour.setTargetColor(color);
    contour.setThreshold(60);
    contour.findContours(kinect);
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofSetColor(255);
  kinect.draw(0, 0);
  
  contour.draw();
  
  ofFill();
  ofSetColor(color);
  ofDrawRectangle(kinect.getWidth(), 0, 128, 128);
}

//--------------------------------------------------------------
void ofApp::exit(){
  kinect.close();
  kinect.setCameraTiltAngle(0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  kinect.setCameraTiltAngle(0);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
  color = kinect.getPixels().getColor(x, y);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
  color = kinect.getPixels().getColor(x, y);
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
