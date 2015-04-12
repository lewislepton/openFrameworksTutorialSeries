#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    video.loadMovie("drClaw.mp4");
    video.play();
    video.setVolume(0.5);
    video.setSpeed(0.9);
}

//--------------------------------------------------------------
void ofApp::update(){
    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    video.draw(0, 0, 320, 320);
    
    ofSetColor(0, 0, 0);
    ofDrawBitmapString("frame: " + ofToString(video.getCurrentFrame()) + " / " + ofToString(video.getTotalNumFrames()),20, 350);
    
    ofDrawBitmapString("frame: " + ofToString(video.getSpeed()) + " / " + ofToString(video.getPosition()),20, 370);
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
