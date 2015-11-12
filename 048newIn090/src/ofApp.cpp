#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    sound.load("beat.wav");
    sound.play();
    sound.setVolume(0.3);
    sound.setLoop(true);
    
    video.load("drClaw.mp4");
    video.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    video.draw(0, 0, 300, 300);
    video.setVolume(0.3);
    
    ofSetColor(255, 100, 60);
    ofFill();
    ofDrawCone(300, 300, 0, 100, 90);
    
    ofSetColor(200, 100, 90);
    ofFill();
    ofDrawCircle(500, 400, 100);
    
    
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
