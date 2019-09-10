#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  osc.setup(PORT);
}

//--------------------------------------------------------------
void ofApp::update(){
  while (osc.hasWaitingMessages()) {
    ofxOscMessage m;
    osc.getNextMessage(&m);
    
    if (m.getAddress() == "/position/x") {
      oscx = m.getArgAsFloat(0);
    }
    
    if (m.getAddress() == "/position/y") {
      oscy = m.getArgAsFloat(0);
    }
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofDrawCircle(oscx * ofGetWidth(), ofMap(oscy, 1, 0, 0, ofGetHeight()), 64);
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
