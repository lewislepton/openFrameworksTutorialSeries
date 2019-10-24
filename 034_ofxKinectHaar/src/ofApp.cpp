#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  kinect.init();
  kinect.open();
  
  color.allocate(kinect.getWidth(), kinect.getHeight());
  gray.allocate(kinect.getWidth(), kinect.getHeight());
  
  haar.setup("haarcascade_frontalface_default.xml");
  haar.setScaleHaar(2);
}

//--------------------------------------------------------------
void ofApp::update(){
  kinect.update();
  
  if (kinect.isFrameNew()){
    color.setFromPixels(kinect.getPixels());
    gray = color;
    haar.findHaarObjects(gray);
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  color.draw(0, 0);
  for (int i = 0; i < haar.blobs.size(); i++) {
    ofSetColor(255);
    ofNoFill();
    ofDrawRectangle(haar.blobs[i].boundingRect);
  }
}

void ofApp::exit(){
  kinect.setCameraTiltAngle(0);
  kinect.close();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  switch (key) {
    case OF_KEY_UP:
      angle++;
      if (angle > 30) {
        angle = 30;
      }
      kinect.setCameraTiltAngle(angle);
      break;
    case OF_KEY_DOWN:
      angle--;
      if (angle < -30) {
        angle = -30;
      }
      kinect.setCameraTiltAngle(angle);
      break;
    case '0':
      angle = 0;
      if (angle == 0) {
        angle = 0;
      }
      kinect.setCameraTiltAngle(angle);
      break;
      
    default:
      break;
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
