//
//  Field.hpp
//  Tic-Tac-Toe-Pro
//
//  Created by Lukas Bos on 29/12/15.
//
//

#ifndef Field_hpp
#define Field_hpp

#include "ofMain.h"
#include <stdio.h>

class Field {
    
public:
    Field();
    Field(float, float, float, float);
    void drawField();
    void updateField(int);
    
    // assigning values to marks
    enum Value {
        VAL_EMPTY = -1,
        VAL_O = 0, //capital o, and a zero
        VAL_X = 1
    };
    
    int value;
    
    float x, y, width, height;

private:
    
};


#endif /* Field_hpp */
