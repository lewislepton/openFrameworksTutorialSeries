#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  gui.setup();
  
  gui.add(intSlider.setup("int slider", 64, 3, 64));
  gui.add(floatSlider.setup("float slider", 30.0, 0.0, 300.0));
  
  gui.add(toggle.setup("toggle", false));
  gui.add(button.setup("button"));
  gui.add(label.setup("label", "THIS IS A LABEL"));
  
  gui.add(intField.setup("int field", 100, 0, 100));
  gui.add(floatField.setup("float field", 100.0, 0.0, 100.0));
  gui.add(textField.setup("text field", "text"));
  
  gui.add(vec2Slider.setup("vec2 slider", ofVec2f(0, 0), ofVec2f(0, 0), ofVec2f(ofGetWidth(), ofGetHeight())));
  gui.add(vec3Slider.setup("vec3 slider", ofVec3f(100, 150, 90), ofVec3f(0, 0, 0), ofVec3f(255, 255, 255)));
  gui.add(vec4Slider.setup("vec4 slider", ofVec4f(0, 0, 0, 0), ofVec4f(0, 0, 0, 0), ofVec4f(255, 255, 255, 255)));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  if (button) {
    ofSetColor(ofRandom(vec3Slider->x), ofRandom(vec3Slider->y), ofRandom(vec3Slider->z));
  }
  ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2, 128);
  
  ofSetCircleResolution(intSlider);
  ofSetColor(vec4Slider->x, vec4Slider->y, vec4Slider->z, vec4Slider->w);
  ofDrawCircle(vec2Slider->x, vec2Slider->y, 128);
  
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
