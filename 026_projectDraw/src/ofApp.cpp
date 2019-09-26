#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofEnableSmoothing();
  gui.setup();
  gui.add(size.setup("size", 3, 1, 8));
  gui.add(color.setup("color", ofColor(255, 255, 255, 255), ofColor(0, 0, 0, 0), ofColor(255, 255, 255, 255)));
  gui.add(background.setup("background", ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(255, 255, 255)));
  gui.add(btnClear.setup("clear"));
  
  fbo.allocate(width, height);
  fbo.begin();
  ofClear(255);
  fbo.end();
}

//--------------------------------------------------------------
void ofApp::update(){
  ofBackground(background->x, background->y, background->z);
  
  if (btnClear) {
    fbo.begin();
    ofClear(255);
    fbo.end();
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  fbo.draw(0, 0);
  ofNoFill();
  ofDrawRectangle(0, 0, width, height);
  gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  if (key == ' ') {
    imgScreenshot.grabScreen(0, 0, fbo.getWidth(), fbo.getHeight());
    string filename = "screenshot_" + ofToString(count, 3, '0') + ".png";
    imgScreenshot.save(filename);
    count++;
  }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
  fbo.begin();
  ofSetLineWidth(size);
  ofSetColor(color);
  polyline.addVertex(ofPoint(x, y));
  polyline.draw();
  fbo.end();
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
  fbo.begin();
  polyline.clear();
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
