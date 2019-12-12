#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  sound.load("drumloop.wav");
  sound.play();
  sound.setLoop(true);
  
  fft = new float[512];
  for (int i = 0; i < 512; i++) {
    fft[i] = 0;
  }
  bands = 512;
}

//--------------------------------------------------------------
void ofApp::update(){
  ofSoundUpdate();
  
  soundSpectrum = ofSoundGetSpectrum(bands);
  for (int i = 0; i < bands; i++) {
    fft[i] *= 0.9;
    if (fft[i] < soundSpectrum[i]) {
      fft[i] = soundSpectrum[i];
    }
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofTranslate(256, 192);
  for (int i = 0; i < bands; i+=16) {
    ofPolyline polyline;
    for (int j = 0; j < bands; j++) {
      polyline.addVertex(j, i - fft[j] * 100.0);
    }
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
