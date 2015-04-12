//
//  ImageClass.cpp
//  016classes
//
//  Created by lewis lepton on 10/04/2015.
//
//

#include "ImageClass.h"

void ImageClass::setup(){
    image.loadImage("pixelPicture.png");
}

void ImageClass::draw(){
    image.draw(100, 100, ofGetMouseX(), ofGetMouseY());
}