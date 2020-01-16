#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  midi.listInPorts();
  midi.openPort("Keystation Mini 32");
  midi.addListener(this);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  for(int i = 0; i < messages.size(); i++) {
    ofxMidiMessage &message = messages[i];

    ofSetColor(255);
    ofDrawBitmapString(ofToString(message.velocity), ofGetWidth() / 2, 128 + i * 16);
  }
}

//--------------------------------------------------------------
void ofApp::exit(){
  midi.closePort();
  midi.removeListener(this);
}

//--------------------------------------------------------------
void ofApp::newMidiMessage(ofxMidiMessage &message){
  messages.push_back(message);
  
  if(messages.size() > 32) {
    messages.erase(messages.begin());
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
