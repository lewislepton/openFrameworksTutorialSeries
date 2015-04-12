#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    video.load("drClaw.mp4");
    
    video.setSpeed(0.3);
    
    cam.setup(320, 240);
}

//--------------------------------------------------------------
void ofApp::update(){
    video.update();
    
    cam.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
//    video.draw(10, 10);
    
//    video.play();
    
    
    cam.draw(20, 20);
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
