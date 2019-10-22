#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  kinect01.init();
  kinect01.open();

//  UNCOMMENT IF YOU HAVE A SECOND KINECT UNIT PLUGGED INTO YOUR COMPUTER.
//  kinect02.init();
//  kinect02.open();
}

//--------------------------------------------------------------
void ofApp::update(){
  kinect01.update();
  
//  UNCOMMENT IF YOU HAVE A SECOND KINECT UNIT PLUGGED INTO YOUR COMPUTER.
//  kinect02.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
  kinect01.draw(0, 0, 640, 480);
  
//  UNCOMMENT IF YOU HAVE A SECOND KINECT UNIT PLUGGED INTO YOUR COMPUTER.
//  kinect02.draw(480, 0, 640, 480);
}

void ofApp::exit(){
  kinect01.setCameraTiltAngle(0);
  kinect01.close();
  
//  UNCOMMENT IF YOU HAVE A SECOND KINECT UNIT PLUGGED INTO YOUR COMPUTER.
//  kinect02.setCameraTiltAngle(0);
//  kinect02.close();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  switch (key) {
    case OF_KEY_UP:
      angle++;
      if (angle > 30) {
        angle = 30;
      }
      kinect01.setCameraTiltAngle(angle);
      break;
      
    case OF_KEY_DOWN:
      angle--;
      if (angle < -30) {
        angle = -30;
      }
      kinect01.setCameraTiltAngle(angle);
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
