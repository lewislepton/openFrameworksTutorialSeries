#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  video.load("video.mp4");
//  video.play();
  
//  control.add(playpause.set("play/pause", false));
//  control.add(volume.set("volume", 0.5, 0.0, 1.0));
//  control.add(scrub.set("scrub", 0.0, 0.0, video.getTotalNumFrames()));
  
  gui.setup();
  
  gui.add(scrub.set("scrub", 0, 0, video.getTotalNumFrames()));
}

//--------------------------------------------------------------
void ofApp::update(){
  video.update();
//
//  video.setVolume(volume);
//
//  if (playpause) {
//    video.setPaused(false);
//  } else {
//    video.setPaused(true);
//  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  video.draw(0, 0);
  
//  if (video.isPaused()) {
    video.setFrame(scrub);
//  }
  
  gui.draw();
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
