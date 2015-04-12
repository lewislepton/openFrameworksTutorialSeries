#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    play.addListener(this, &ofApp::playPressed);
    stop.addListener(this, &ofApp::stopPressed);
    
    gui.setup();
    gui.add(play.setup("play"));
    gui.add(stop.setup("stop"));
    gui.add(volume.setup("volume", 1.0, 0.0, 1.0));
    gui.add(speed.setup("speed", 1.0, -3.0, 3.0));
    
    video.loadMovie("drClaw.mp4");
}

//--------------------------------------------------------------
void ofApp::update(){
    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    video.draw(200, 200, 300, 300);
    video.setVolume(volume);
    video.setSpeed(speed);
    
    gui.draw();
    
}

void ofApp::playPressed(){
    video.play();
}

void ofApp::stopPressed(){
    video.stop();
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
