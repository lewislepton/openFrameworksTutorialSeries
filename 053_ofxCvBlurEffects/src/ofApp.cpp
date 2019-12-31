#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  kinect.init();
  kinect.open();
  
  imgBlur.allocate(kinect.getWidth(), kinect.getHeight(), OF_IMAGE_COLOR);
  
  gui.setup();
  gui.add(uiSelectBlur.set("select blur", 0, 0, 2));
  gui.add(uiRadius.set("radius", 60, 0, 100));
}

//--------------------------------------------------------------
void ofApp::update(){
  kinect.update();
  if (kinect.isFrameNew()){
    copy(kinect, imgBlur);
    
    if (uiSelectBlur == 0) {
      blur(imgBlur, uiRadius);
    } else if (uiSelectBlur == 1){
      GaussianBlur(imgBlur, uiRadius);
    } else {
      medianBlur(imgBlur, uiRadius);
    }
    
    imgBlur.update();
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  imgBlur.draw(0, 0);
  
  gui.draw();
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
