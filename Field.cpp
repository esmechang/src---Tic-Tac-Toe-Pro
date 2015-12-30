//
//  Field.cpp
//  Tic-Tac-Toe-Pro
//
//  Created by Lukas Bos on 29/12/15.
//
//

#include "Field.hpp"


Field::Field() {
}

Field::Field(float x, float y, float width, float height) {

    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    value = VAL_EMPTY;
}


// enum makes it possible to call: updateField(VAL_X);
void Field::updateField(int c) {
    this->value = c;
}


// need to do this in draw
void Field::drawField() {
    
    std::cout<<value;
    
    float offset = 20;

    ofFill();
    ofSetColor(200, 200, 200); //fill color gray
    ofDrawRectangle(x, y, width, height);
    ofNoFill(); //stroke
    ofSetColor(0, 0, 0);//stroke color BLACK
    ofSetLineWidth(2);
    ofDrawRectangle(x, y, width, height);
    
    switch (value) {
        case -1: //update to empty
            // do nothing
            break;
        case 0: // update to O
            ofDrawEllipse(x+width/2, y+height/2, width-2*offset, height-2*offset);
            break;
        case 1: //update to X
            ofDrawLine(x+offset, y+offset, x+width-offset, y+height-offset);
            ofDrawLine(x+width - offset, y+offset, x+offset, y+width-offset);
            break;
    }

    
}
