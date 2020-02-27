#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetCylinderResolution(128, 64);
  ofSetSphereResolution(128);
  
  gui.setup();
  gui.add(uiAmount.set("amount", 1, 1, 4));
  gui.add(uiPower.set("power", 0, 0, 60));
  gui.add(uiLightPosition.set("light position",
                              ofVec3f(0),
                              ofVec3f(-300),
                              ofVec3f(300)));
}

//--------------------------------------------------------------
void ofApp::update(){
  light.setPosition(uiLightPosition->x, uiLightPosition->y, uiLightPosition->z);
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofPushMatrix();
  ofEnableDepthTest();
  light.enable();
  cam.begin();
  
  for (int i = 0; i < uiAmount; i++){
    for (int j = 0; j < uiAmount; j++) {
      float y = sin(ofGetElapsedTimef() + i) * uiPower;
      ofSetColor(200, 150, 130);
      ofDrawSphere(i * 64, 48 - y, j * 64, 16);
      
      ofSetColor(140);
      ofDrawCylinder(i * 64, 0, j * 64, 24, 128);
    }
  }
  
  cam.end();
  light.disable();
  ofDisableDepthTest();
  ofPopMatrix();
  
  if (bHide){
    gui.draw();
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  bHide = !bHide;
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
