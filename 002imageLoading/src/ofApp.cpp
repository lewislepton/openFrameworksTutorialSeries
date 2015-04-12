#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    image.load("pixelPicture.png");
    image02.load("pixelPicture.png");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    image.draw(ofGetWidth()/2 -50, ofGetHeight()/2 -50, 100, 100);
    image02.draw(0,0,50,50);
}