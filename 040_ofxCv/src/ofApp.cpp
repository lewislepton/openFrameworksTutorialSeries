#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  webcam.setup(640, 480);
  
  gui.setup();
  gui.add(min.set("min", 30.0, 0.0, 300.0));
  gui.add(max.set("max", 300.0, 0.0, 600.0));
  gui.add(threshold.set("threshold", 100.0, 0.0, 200.0));
  gui.add(hole.set("hole", false));
}

//--------------------------------------------------------------
void ofApp::update(){
  webcam.update();
  if (webcam.isFrameNew()){
    contour.setMinArea(min);
    contour.setMaxArea(max);
    contour.setThreshold(threshold);
    contour.setFindHoles(hole);
    contour.findContours(webcam);
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  webcam.draw(0, 0);
  contour.draw();
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
