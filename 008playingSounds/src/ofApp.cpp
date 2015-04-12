#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    drums.load("drums.wav");
    synthHit.load("synthHit.wav");
    
    drums.setVolume(0.5);
    synthHit.setVolume(0.3);
    
    drums.play();
    synthHit.play();
    
    drums.setLoop(true);
    synthHit.setLoop(true);
    
    drums.setSpeed(0.3);
    synthHit.setSpeed(-0.5);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
