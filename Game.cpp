//
//  game.cpp
//  Tic-Tac-Toe-Pro
//
//  Created by Lukas Bos on 29/12/15.
//
//

#include "Game.hpp"

Game::Game() {
}

Game::Game(int screenWidth, int screenheight, int rows, int cols) {
    
    this->rows = rows;
    this->cols = cols;
    
    int dist_hor = screenWidth / cols;
    int dist_ver = screenheight / rows;
    
    // initialize all fields
    for (int x = 0; x < cols; x++) {
        for (int y = 0; y < rows; y++) {
            field[x][y] = Field(dist_hor * x, dist_ver*y, dist_hor, dist_ver); //two dimensional array
        }
    }
}

// draw a flexible board, more than three rows/columns must be possible
// a standard game will have the value: rows = cols = 3;
void Game::drawBoard() {
    for (int x = 0; x < cols; x++) {
        for (int y = 0; y < rows; y++) {
            field[x][y].drawField();
        }
    }
}

void Game::mouseReleased(int mouse_x, int mouse_y) {
    for (int x = 0; x < cols; x++) {
        for (int y = 0; y < rows; y++) {
            Field* f = &field[x][y];

            if (mouse_x > f->x && mouse_x < f->x + f->width && mouse_y > f->y && mouse_y <f->y + f->height) {
                if (toggle) {
                    f->updateField(Field::VAL_X);
                } else {
                    f->updateField(Field::VAL_O);
                }
                toggle = !toggle;
            }
        }
    }
}

bool Game::checkGameOver() {
    
    bool fields_are_empty = false;
    
    for (int x = 0; x < cols; x++) {
        for (int y = 0; y < rows; y++) {
            if (field[x][y].value == Field::VAL_EMPTY) {
                fields_are_empty = true;
                break;
            }
        }
    }
    if (fields_are_empty) {
        return false;
    }
    return true;
}
