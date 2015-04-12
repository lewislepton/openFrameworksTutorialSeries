#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup("TITLE");
    gui.add(posX.set("posX", 90, 0, 600));
    gui.add(posY.set("posY", 150, 0, 600));
    gui.add(red.set("red", 255, 0, 255));
    gui.add(green.set("green", 255, 0, 255));
    gui.add(blue.set("blue", 255, 0, 255));
    gui.add(alpha.set("alpha", 255, 0, 255));
    gui.add(radius.set("radius", 255, 0, 1000));
    gui.add(switcher.set("switcher", false));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(red, green, blue, alpha);
    ofCircle(posX, posY, radius);
    
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
