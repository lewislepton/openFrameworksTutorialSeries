#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(60);
  kinect.init();
  kinect.open();
  
  imitate(pxPrevious, kinect);
  imitate(imgDifference, kinect);
}

//--------------------------------------------------------------
void ofApp::update(){
  kinect.update();
  
  if (kinect.isFrameNew()){
    absdiff(kinect, pxPrevious, imgDifference);
    
    imgDifference.update();
    
    copy(kinect, pxPrevious);
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
//  imgDifference.draw(0, 0);
  
  for (int i = 0; i < kinect.getHeight(); i+=8) {
    ofPolyline polyline;
    for (int j = 0; j < kinect.getWidth(); j++) {
      ofColor color = imgDifference.getPixels().getColor(j, i);
      int brightness = color.getBrightness();
      polyline.addVertex(j , i + ofMap(brightness, 0, 255, 0, -64));
    }
    polyline = polyline.getSmoothed(10);
    polyline.draw();
  }
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
