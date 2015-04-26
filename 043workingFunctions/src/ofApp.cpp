#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    drawSetup();
}

//--------------------------------------------------------------
void ofApp::update(){
    drawUpdate();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofCircle(40, 40, 40);
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofCircle(40, 40, 40);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofCircle(40, 40, 40);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofCircle(40, 40, 40);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofCircle(40, 40, 40);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofCircle(40, 40, 40);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofCircle(40, 40, 40);
}

void ofApp::drawCircle(){
    
}

void ofApp::drawUpdate(){

}