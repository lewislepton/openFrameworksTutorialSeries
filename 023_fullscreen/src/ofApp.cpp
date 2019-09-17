#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  gui.setup();
  gui.add(togFullscreen.setup("fullscreen", false));
}

//--------------------------------------------------------------
void ofApp::update(){
  if (togFullscreen) {
    ofSetFullscreen(true);
  } else {
    ofSetFullscreen(false);
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
//  if (key == 'f') {
//    ofToggleFullscreen();
//  }
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
