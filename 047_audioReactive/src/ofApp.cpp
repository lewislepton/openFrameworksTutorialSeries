#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  sound.load("drumloop.wav");
  sound.play();
  sound.setLoop(true);
  
  gui.setup();
  gui.add(volume.set("volume", 0.5, 0.0, 1.0));
  gui.add(decay.set("decay", 0.5, 0.0, 1.0));
  
  fft = new float[128];
  for (int i = 0; i < 128; i++) {
    fft[i] = 0;
  }
  
  bands = 64;
}

//--------------------------------------------------------------
void ofApp::update(){
  ofSoundUpdate();
  
  sound.setVolume(volume);
  
  soundSpectrum = ofSoundGetSpectrum(bands);
  for (int i = 0; i < bands; i++) {
    fft[i] *= decay;
    if (fft[i] < soundSpectrum[i]) {
      fft[i] = soundSpectrum[i];
    }
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  for (int i = 0; i < bands; i++) {
    ofDrawRectangle(ofGetWidth() / 2, 128, fft[i] * 100, 128);
    ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2, fft[i] * 100);
  }
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
