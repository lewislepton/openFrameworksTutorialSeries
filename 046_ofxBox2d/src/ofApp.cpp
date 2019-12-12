#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  box2d.init();
  box2d.setGravity(0, 30);
  box2d.createGround();
  box2d.registerGrabbing();
  box2d.createBounds(ofRectangle(0, 0, ofGetWidth(), ofGetHeight()));
  
  circle.setPhysics(3.0, 0.5, 1.0);
  circle.setup(box2d.getWorld(), 300, 300, 32);
  
  polygonShape.begin();
  polygonShape.addVertex(0, 0);
  polygonShape.addVertex(64, 0);
  polygonShape.addVertex(64, 64);
  polygonShape.end();
}

//--------------------------------------------------------------
void ofApp::update(){
  box2d.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
  circle.draw();
  
  for (auto circle:circles) {
    circle->draw();
  }
  
//  OBVOISULY WE CAN STILL DO THE TRADITIONAL WAY. BUT 'auto' DOES CUT OUT A LOT OF CODE & IS EVEN MORE UNDERSTANDABLE
//  for (int i = 0; i < circles.size(); i++){
//    circles[i]->draw();
//  }

  for (auto rect:rectangles) {
    rect->draw();
  }
  
//  OBVOISULY WE CAN STILL DO THE TRADITIONAL WAY. BUT 'auto' DOES CUT OUT A LOT OF CODE & IS EVEN MORE UNDERSTANDABLE
//  for (int i = 0; i < rectangles.size(); i++){
//    rectangles[i]->draw();
//  }

  for (auto polygon:polygons) {
    polygon->draw();
  }
  
//  OBVOISULY WE CAN STILL DO THE TRADITIONAL WAY. BUT 'auto' DOES CUT OUT A LOT OF CODE & IS EVEN MORE UNDERSTANDABLE
//  for (int i = 0; i < polygons.size(); i++){
//    polygons[i]->draw();
//  }
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
  if (button == 0){
    auto circle = make_shared<ofxBox2dCircle>();
    circle->setPhysics(3.0, 0.5, 1.0);
    circle->setup(box2d.getWorld(), mouseX, mouseY, 32);
    circles.push_back(circle);
  }

//  if (button == 0){
//    auto rect = make_shared<ofxBox2dRect>();
//    rect->setPhysics(3.0, 0.5, 1.0);
//    rect->setup(box2d.getWorld(), mouseX, mouseY, 32, 32);
//    rectangles.push_back(rect);
//  }
//
//  if (button == 0){
//    auto polygon = make_shared<ofxBox2dPolygon>();
//    polygon->addVertices(polygonShape.getVertices());
//    polygon->setPhysics(3.0, 0.5, 1.0);
//    polygon->create(box2d.getWorld());
//    polygons.push_back(polygon);
//  }

//  THIS DOES NOT WORK. WE NEED THE 'make_shared' TO PUSH THE NEW SHAPE IT INTO THE VECTOR WITH POINTERS '->'
//  if (button == 0) {
//    ofxBox2dCircle circle = ofxBox2dCircle();
//    circle.setPhysics(3.0, 0.5, 1.0);
//    circle.setup(box2d.getWorld(), mouseX, mouseY, 32);
//    circles.push_back(circle);
//  }
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
