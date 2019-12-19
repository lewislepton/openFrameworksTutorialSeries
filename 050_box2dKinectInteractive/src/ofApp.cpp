#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  gui.setup();
  gui.add(uiLearn.setup("learn"));
  gui.add(uiClearCircles.setup("clear circles"));
  gui.add(uiClearContourEdge.setup("clear contour"));
  gui.add(uiThreshold.setup("threshold", 50, 0, 100));
  
  kinect.init();
  kinect.open();
  
  color.allocate(kinect.getWidth(), kinect.getHeight());
  grayscale.allocate(kinect.getWidth(), kinect.getHeight());
  background.allocate(kinect.getWidth(), kinect.getHeight());
  difference.allocate(kinect.getWidth(), kinect.getHeight());
  
  box2d.init();
  box2d.setGravity(0, 30);
  box2d.createGround();
  box2d.createBounds(ofRectangle(0, 0, kinect.getWidth(), kinect.getHeight()));
}

//--------------------------------------------------------------
void ofApp::update(){
  box2d.update();
  kinect.update();
  
  if (kinect.isFrameNew()){
    color.setFromPixels(kinect.getPixels());
    grayscale = color;
    difference.absDiff(background, grayscale);
    difference.threshold(uiThreshold);
    
    int minimum = difference.getWidth() * difference.getHeight() * 0.05;
    int maximum = difference.getWidth() * difference.getHeight() * 0.8;
    contour.findContours(difference, minimum, maximum, 1, false);
  }
  
  if (uiLearn){
    background = color;
  }
  
  if (uiClearCircles){
    circles.clear();
  }
  
  if (uiClearContourEdge){
    contourEdge->clear();
    background = color;
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  color.draw(0, 0);
  
  if (!contour.blobs.empty()){
    createContourEdge(ofPolyline(contour.blobs.at(0).pts));
    contourEdge->draw();
  }
  
  for (auto circle:circles){
    circle->draw();
  }
  
  gui.draw();
}

//--------------------------------------------------------------
void ofApp::exit(){
  kinect.setCameraTiltAngle(0);
  kinect.close();
}

//--------------------------------------------------------------
void ofApp::createContourEdge(ofPolyline polyline){
  delete contourEdge;
  contourEdge = new ofxBox2dEdge();
  contourEdge->addVertexes(polyline);
  contourEdge->create(box2d.getWorld());
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
  auto circle = make_shared<ofxBox2dCircle>();
  circle->setPhysics(3.0, 0.5, 0.1);
  circle->setup(box2d.getWorld(), x, y, 32);
  circles.push_back(circle);
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
