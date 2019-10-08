#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  camera.setup(640, 480);
  
  color.allocate(camera.getWidth(), camera.getHeight());
  gray.allocate(camera.getWidth(), camera.getHeight());
  background.allocate(camera.getWidth(), camera.getHeight());
  difference.allocate(camera.getWidth(), camera.getHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
  camera.update();
  
  if (camera.isFrameNew()){
    color.setFromPixels(camera.getPixels());
    gray = color;
    
    if (learn){
      background = gray;
      learn = false;
    }
    
    difference.absDiff(background, gray);
    difference.threshold(threshold);
    
    contour.findContours(difference, 10, camera.getWidth() * camera.getHeight(), 10, true);
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  color.draw(0, 0);
  contour.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  switch (key) {
    case OF_KEY_UP:
      threshold++;
      break;
      
    case OF_KEY_DOWN:
      threshold--;
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
