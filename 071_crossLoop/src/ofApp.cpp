#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  gui.setup();
  gui.add(uiAmount.set("amount", 1, 1, 12));
  gui.add(uiSpeed.set("speed", 0, 0, 30));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  for (int i = 0; i < uiAmount; i++) {
    for (int j = 0; j < uiAmount; j++) {
      ofPushMatrix();
      ofTranslate(i * 90, j * 90);
      ofRotateDeg(ofGetElapsedTimef() * uiSpeed);
      ofSetRectMode(OF_RECTMODE_CENTER);
      ofDrawRectangle(0, 0, 30, 90);
      ofDrawRectangle(0, 0, 90, 30);
      ofPopMatrix();
    }
  }
  
  if (bHide){
    gui.draw();
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  bHide = !bHide;
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
