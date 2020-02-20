#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGB);
  
  record.setup(true, false);
  record.setWidth(ofGetWidth());
  record.setHeight(ofGetHeight());
  record.setFFmpegPath(ofToDataPath("ffmpeg"));
  record.setFps(60);
}

//--------------------------------------------------------------
void ofApp::update(){
  
}

//--------------------------------------------------------------
void ofApp::draw(){
  if (record.isRecording()){
    if (bRecording){
      fbo.readToPixels(pixel);
      if (pixel.getWidth() > 0 && pixel.getHeight() > 0) {
        record.addFrame(pixel);
      }
    }
  }
  
  fbo.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  switch (key) {
    case 'r':
      bRecording = !bRecording;
      
      if(record.isRecording()){
        record.stop();
      } else {
        record.setOutputPath(ofToDataPath(".mp4", true));
        record.startCustomRecord();
      }
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
  fbo.begin();
  ofDrawCircle(x, y, 3);
  fbo.end();
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
