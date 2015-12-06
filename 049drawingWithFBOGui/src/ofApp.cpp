#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    
    gui.setup();
    gui.add(scale.set("scale", 0, 0, 255));
    gui.add(red.set("red", 0, 0, 255));
    gui.add(green.set("green", 0, 0, 255));
    gui.add(blue.set("blue", 0, 0, 255));
    gui.add(alpha.set("alpha", 0, 0, 255));
    
    fbo.allocate(1280, 720);
    fbo.begin();
    ofClear(255);
    fbo.end();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    fbo.draw(0, 0);
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
    fbo.begin();
    ofPushStyle();
    ofSetColor(red, green, blue, ofGetFrameNum() % 255);
    ofDrawCircle(mouseX, mouseY, scale);
    ofPopStyle();
    fbo.end();
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
