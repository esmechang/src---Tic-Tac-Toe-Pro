#include "ofApp.h"
#include "Game.hpp"
#include "constants.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    game = Game(BOARD_WIDTH,BOARD_HEIGHT,ROWS,COLS);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    game.drawBoard();
    
    ofDrawBitmapString("Current player to move: TODO (X)", BOARD_WIDTH + 20, 60);
    ofDrawBitmapString("Score player X: TODO", BOARD_WIDTH + 20, 80);
    ofDrawBitmapString("Score player O: TODO", BOARD_WIDTH + 20, 100);
    
    ofDrawBitmapString("DEBUG INFO", BOARD_WIDTH + 20, 140);
    ofDrawBitmapString("Rows: " + ofToString(ROWS), BOARD_WIDTH + 20, 160);
    ofDrawBitmapString("Columns: " + ofToString(COLS), BOARD_WIDTH + 20, 180);

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
    game.mouseReleased(x, y);
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
