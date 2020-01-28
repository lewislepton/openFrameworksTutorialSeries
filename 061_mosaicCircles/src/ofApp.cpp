#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  kinect.init();
  kinect.open();
}

//--------------------------------------------------------------
void ofApp::update(){
  kinect.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
  for (int i = 0; i < kinect.getWidth(); i+= 16) {
    for (int j = 0; j < kinect.getHeight(); j+= 16) {
      ofColor color = kinect.getPixels().getColor(i, j);
      ofSetColor(color);
      float brightness = color.getBrightness();
      float radius = ofMap(brightness, 0, 255, 0, 8);
      ofDrawCircle(i, j, radius);
    }
  }
}

//--------------------------------------------------------------
void ofApp::exit(){
  kinect.close();
  kinect.setCameraTiltAngle(0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  kinect.setCameraTiltAngle(0);
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
