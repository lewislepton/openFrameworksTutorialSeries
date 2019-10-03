#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  camera.setup(640, 480);
  
  color.allocate(camera.getWidth(), camera.getHeight());
  gray.allocate(camera.getWidth(), camera.getHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
  camera.update();
  
  if (camera.isFrameNew()){
    color.setFromPixels(camera.getPixels());
    gray = color;
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  color.draw(0, 0);
  gray.draw(480, 0);
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
