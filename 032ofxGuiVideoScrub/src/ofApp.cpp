#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    video.loadMovie("drClaw.mp4");
    
    gui.setup();
    gui.add(scrub.set("scrub", 0, 0, video.getTotalNumFrames()));
}

//--------------------------------------------------------------
void ofApp::update(){
    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    video.draw(100, 100, 300, 300);
    
    gui.draw();
    
    video.setFrame(scrub);
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
