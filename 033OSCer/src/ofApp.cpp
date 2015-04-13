#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    receive.setup(PORT);
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){
    while (receive.hasWaitingMessages()) {
        ofxOscMessage m;
        receive.getNextMessage(&m);
        
        if (m.getAddress() == "/vertical/x") {
            oscY = m.getArgAsFloat(0);
        }
        if (m.getAddress() == "/horizontal/x") {
            oscX = m.getArgAsFloat(0);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofCircle(oscX *300, oscY *300, 30);
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
