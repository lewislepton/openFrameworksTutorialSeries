#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  gui.setup();
  gui.add(uiBpm.set("BPM", 120, 60, 240));
  
  seqRadius.set("radius", 32, 0, 256);
  
  sequencer.setup(16);
  sequencer.addRow(&seqRadius);
  sequencer.setSmooth(true);
  sequencer.start();
}

//--------------------------------------------------------------
void ofApp::update(){
  sequencer.update();
  sequencer.setBpm(uiBpm);
}

//--------------------------------------------------------------
void ofApp::draw(){
  sequencer.draw();
  
  ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2, seqRadius);
  
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
