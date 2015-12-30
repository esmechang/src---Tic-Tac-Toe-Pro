//
//  game.hpp
//  Tic-Tac-Toe-Pro
//
//  Created by Lukas Bos on 29/12/15.
//
//

#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include "ofMain.h"
#include "constants.h"
#include "Field.hpp"

class Game {

public:
    Game(); 
    Game(int, int, int, int);
    void drawGame();
    void mouseReleased(int, int);
    Field field[ROWS][COLS];
    void drawBoard();
    int rows,cols;
    bool toggle;
    bool checkGameOver();


    
private:
    
    void drawData();
    void drawText();
    
    int border_width;
    int board_size;
    
    
};



#endif /* game_hpp */
