#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//  shader.load("shader");
  
  shaderFilter.load("shader.frag");
  shaderFilter.allocate(ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
  float red = sin(ofGetElapsedTimef()) * 2.0;
  shaderFilter.setUniform1f("u_red", red);
}

//--------------------------------------------------------------
void ofApp::draw(){
//  shader.begin();
//  ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
//  shader.end();
  
  shaderFilter.render();
  shaderFilter.draw(0, 0);
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
  shaderFilter.allocate(w, h);
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
