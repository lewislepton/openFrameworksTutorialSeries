#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  video.load("video.mp4");
  video.play();
  texture.allocate(video.getWidth(), video.getHeight(), OF_PIXELS_RGBA);
}

//--------------------------------------------------------------
void ofApp::update(){
  video.update();
  if (video.isFrameNew()){
    ofPixels pixels = video.getPixels();
    texture.loadData(pixels);
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  texture.draw(0, 0);
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
