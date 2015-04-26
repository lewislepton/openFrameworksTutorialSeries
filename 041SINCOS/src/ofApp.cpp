#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(sinParam.set("SINE", 0.0, 0.0, 300.0));
    gui.add(cosParam.set("COSINE", 0.0, 0.0, 300.0));
}

//--------------------------------------------------------------
void ofApp::update(){
    sine = sin(ofGetElapsedTimef() * 2.0) * sinParam;
    cose = cos(ofGetElapsedTimef() * 2.0) * cosParam;
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofCircle(sine * sin(ofGetElapsedTimef() * 4.987), cose * cos(ofGetElapsedTimef() * 3.864), 30);
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
