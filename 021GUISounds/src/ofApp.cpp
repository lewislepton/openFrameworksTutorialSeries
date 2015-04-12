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
    
    sample.loadSound("drums.wav");
    
    sample.setLoop(true);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    sample.setVolume(volume);
    sample.setSpeed(speed);
}

void ofApp::playPressed(){
    sample.play();
}

void ofApp::stopPressed(){
    sample.stop();
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
