#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ps3eye.setGrabber(std::make_shared<ofxPS3EyeGrabber>());
  ps3eye.setup(640, 480);
  
//  kinect.init();
//  kinect.open();
  
//  kinectv2.open();
}

//--------------------------------------------------------------
void ofApp::update(){
  ps3eye.update();
  
  if (ps3eye.isFrameNew()){
    contour.setMinArea(60);
    contour.setMaxArea(600);
    contour.setThreshold(60);
    contour.findContours(ps3eye);
  }
  
//  kinect.update();
//
//  if (kinect.isFrameNew()){
//    contour.setMinArea(60);
//    contour.setMaxArea(600);
//    contour.setThreshold(60);
//    contour.findContours(kinect);
//  }
  
//  kinectv2.update();
//
//  if (kinectv2.isFrameNew()){
//    contour.setMinArea(60);
//    contour.setMaxArea(600);
//    contour.setThreshold(60);
//
//    ofPixels pixel = kinectv2.getRgbPixels();
//    pixel.resize(960, 540);
//
//    contour.findContours(pixel);
//
//    texture.loadData(kinectv2.getRgbPixels());
//  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  ps3eye.draw(0, 0);
  
//  kinect.draw(0, 0);
  
//  texture.draw(0, 0, 960, 540);
  
  contour.draw();
}

void ofApp::exit(){
  ps3eye.close();
  
//  kinect.setCameraTiltAngle(0);
//  kinect.close();
  
//  kinectv2.close();
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
