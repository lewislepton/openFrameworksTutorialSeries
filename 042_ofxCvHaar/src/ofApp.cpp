#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  finder.setup("haarcascade_frontalface_default.xml");
  finder.setPreset(ofxCv::ObjectFinder::Fast);
  webcam.setup(640, 480);
}

//--------------------------------------------------------------
void ofApp::update(){
  webcam.update();
  if (webcam.isFrameNew()){
    finder.update(webcam);
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  webcam.draw(0, 0);
  finder.draw();
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
