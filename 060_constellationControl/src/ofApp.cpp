#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  osc.setup(PORT);
  
  ofBackground(0);
  ofSetFrameRate(60);
  mesh.setMode(OF_PRIMITIVE_LINES);
}

//--------------------------------------------------------------
void ofApp::update(){
  while (osc.hasWaitingMessages()){
    ofxOscMessage message;
    osc.getNextMessage(message);
    
    if (message.getAddress() == "/1/amount") {
      uiAmount = message.getArgAsFloat(0);
    }
    
    if (message.getAddress() == "/1/position/1") {
      uiPos1 = message.getArgAsFloat(0);
    }
    
    if (message.getAddress() == "/1/position/2") {
      uiPos2 = message.getArgAsFloat(0);
    }
    
    if (message.getAddress() == "/1/position/3") {
      uiPos3 = message.getArgAsFloat(0);
    }
    
    if (message.getAddress() == "/1/position/4") {
      uiPos4 = message.getArgAsFloat(0);
    }
    
    if (message.getAddress() == "/1/position/5") {
      uiPos5 = message.getArgAsFloat(0);
    }
    
    if (message.getAddress() == "/1/position/6") {
      uiPos6 = message.getArgAsFloat(0);
    }
    
    if (message.getAddress() == "/1/distance") {
      uiDistance = message.getArgAsFloat(0);
    }
    
    if (message.getAddress() == "/1/points") {
      uiPoints = message.getArgAsFloat(0);
    }
  }
  
  ofSeedRandom(30);
  mesh.clear();
  for (int i = 0; i < uiAmount; i++) {
    ofVec3f position = ofVec3f(
      ofMap(ofNoise(ofRandom(600), ofGetElapsedTimef() * 0.006), 0, 1, uiPos1, uiPos2),
      ofMap(ofNoise(ofRandom(600), ofGetElapsedTimef() * 0.006), 0, 1, uiPos3, uiPos4),
      ofMap(ofNoise(ofRandom(600), ofGetElapsedTimef() * 0.006), 0, 1, uiPos5, uiPos6)
    );
    mesh.addVertex(position);
    mesh.addColor(ofColor(255));
  }
  
  for (int i = 0; i < mesh.getVertices().size(); i++) {
    auto position = mesh.getVertex(i);
    for (int j = 0; j < mesh.getVertices().size(); j++) {
      auto jdistance = mesh.getVertex(j);
      auto distance = glm::distance(position, jdistance);
      
      if (distance < uiDistance) {
        mesh.addIndex(i);
        mesh.addIndex(j);
      }
    }
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
  if (uiPoints == 1) {
    for (int i = 0; i < mesh.getVertices().size(); i++){
      ofSetColor(255);
      ofDrawSphere(mesh.getVertex(i), 3);
    }
  }
  mesh.draw();
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
