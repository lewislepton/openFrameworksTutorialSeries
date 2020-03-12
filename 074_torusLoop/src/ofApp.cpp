#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  gui.setup();
  gui.add(uiLightPosition.set("light position",
                              ofVec3f(0),
                              ofVec3f(-300),
                              ofVec3f(300)));
  gui.add(uiLightColor.set("light color", ofVec3f(0), ofVec3f(0), ofVec3f(255)));
  
  cam.setDistance(900);
  
  model.loadModel("torus.obj");
}

//--------------------------------------------------------------
void ofApp::update(){
  light.setPosition(uiLightPosition->x, uiLightPosition->y, uiLightPosition->z);
  light.setAmbientColor(ofColor(uiLightColor->x, uiLightColor->y, uiLightColor->z));
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofEnableDepthTest();
  light.enable();
  ofPushMatrix();
  cam.begin();
  for (int i = 0; i < 30; i++) {
    ofScale(0.8);
    ofRotateXDeg(sin(i + ofGetElapsedTimef()) * 6.0);
    model.drawFaces();
  }
  cam.end();
  ofPopMatrix();
  light.disable();
  ofDisableDepthTest();
  
  gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  uiLightPosition.set(ofVec3f(0));
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
