#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  sliderGroup.setName("sliders");
  sliderGroup.add(intSlider.set("int slider", 3, 3, 64));
  sliderGroup.add(floatSlider.set("float slider", 32, 32, 256));
  
  circle.setup();
  
  mainGroup.add(circle.params);
  mainGroup.add(sliderGroup);
  
  gui.setup(mainGroup);
}

//--------------------------------------------------------------
void ofApp::update(){
  ofSetCircleResolution(intSlider);
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofSetColor(circle.colors->x, circle.colors->y, circle.colors->z);
  ofDrawCircle(circle.x, circle.y, floatSlider);
  
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
