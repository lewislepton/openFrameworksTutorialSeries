#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  kinect.init();
  kinect.open();
  
  gui.setup();
  gui.add(uiColor.set("color", ofVec3f(0, 1, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1)));
  gui.add(uiThreshold.set("threshold", 0.6, 0, 1));
  
  shader.load("shader");
  
  video.load("video.mp4");
  video.play();
  video.setVolume(0);
}

//--------------------------------------------------------------
void ofApp::update(){
  kinect.update();
  video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
  video.draw(0, 0);
  
  shader.begin();
  shader.setUniform3f("u_color", uiColor->x, uiColor->y, uiColor->z);
  shader.setUniform1f("u_threshold", uiThreshold);
  
  kinect.draw(0, ofGetHeight() - kinect.getHeight());
  
  shader.end();
  
  gui.draw();
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
