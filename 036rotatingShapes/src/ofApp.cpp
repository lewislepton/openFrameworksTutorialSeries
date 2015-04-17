#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(120);
    ofSetFrameRate(60);
    
    gui.setup();
    gui.add(rotateX.set("x", 0.0, 0.0, 9.0));
    gui.add(rotateY.set("y", 0.0, 0.0, 9.0));
    gui.add(rotateZ.set("z", 0.0, 0.0, 9.0));
    
    rotationX = 0.0;
    rotationY = 0.0;
    rotationZ = 0.0;
}

//--------------------------------------------------------------
void ofApp::update(){
    rotationX = rotationX + rotateX;
    rotationY = rotationY + rotateY;
    rotationZ = rotationZ + rotateZ;
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofRotateX(rotationX);
    ofRotateY(rotationY);
    ofRotateZ(rotationZ);
    
    ofSetColor(255, 0, 0);
    ofCircle(-300, 0, 130);
    
    ofSetColor(0, 255, 0);
    ofCircle(0, 0, 130);
    
    ofSetColor(0, 0, 255);
    ofCircle(300, 0, 130);
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
