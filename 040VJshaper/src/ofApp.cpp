#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    circle01.setup();
    circle02.setup();
    circle03.setup();
    
    guiGroup.setName("controls");
    guiGroup.add(circle01.circleParams);
    guiGroup.add(circle02.circleParams);
    guiGroup.add(circle03.circleParams);
    
    gui.setup(guiGroup);
    gui.add(volume.set("volume", 0.3, 0.0, 0.6));
    gui.add(speed.set("speed", 1.0, -3.0, 3.0));
    
    beat.loadSound("beat.wav");
    beat.setLoop(true);
    beat.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSoundUpdate();
    beat.setVolume(volume);
    beat.setSpeed(speed);
    
    circle01.update();
    circle02.update();
    circle03.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    circle01.draw();
    circle02.draw();
    circle03.draw();
    
    gui.draw();
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
