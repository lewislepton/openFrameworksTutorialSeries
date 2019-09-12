#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
  for (int v = 0; v < image.size(); v++) {
    video[v].update();
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  for (int i = 0; i < image.size(); i++) {
    image[i].draw(0, 0);
  }
  
  for (int v = 0; v < image.size(); v++) {
    video[v].draw(0, 0);
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
  if (dragInfo.files.size() > 0) {
    sound.assign(dragInfo.files.size(), ofSoundPlayer());
    for (int s = 0; s < dragInfo.files.size(); s++) {
      sound[s].load(dragInfo.files[s]);
      sound[s].play();
      sound[s].setVolume(0.6);
      sound[s].setLoop(true);
    }
  }
  
  if (dragInfo.files.size() > 0) {
    image.assign(dragInfo.files.size(), ofImage());
    for (int i = 0; i < dragInfo.files.size(); i++) {
      image[i].load(dragInfo.files[i]);
    }
  }
  
  if (dragInfo.files.size() > 0) {
    video.assign(dragInfo.files.size(), ofVideoPlayer());
    for (int v = 0; v < dragInfo.files.size(); v++) {
      video[v].load(dragInfo.files[v]);
      video[v].play();
    }
  }
}
