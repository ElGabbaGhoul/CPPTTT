#include <iostream>
#include "tictactoeheader.h"


void displayInstructions(int round)
{
    if (round == 1){
        ++round;
        std::cout << "Long instructions" << std::endl;
    }
    else
    {
        std::cout << "Short instructions" << std::endl;
    };

}

void initBoard(){
    // pass in board array
    // init to start new game
    // no explicit return, board updated via reference
}

void showBoard(){
    // pass in board safely (reference?)
    // Display current state of board
    // no return
}

void getMove(){
    // Pass board to current player
    // Get a move
    // validate move is integer in range
    // verify location is currently empty
    // update board with current player in valid location
    // No explicit return
}

bool checkWin(){
    // pass board safely (reference?)
    // return true if win
}

bool checkDraw(){
    // pass board safely
    // return true if draw
}

bool playAgain(){
    // ask player if want to play again
    // validate user input
    // accept either upper or lowercase
    // only accept letters y for yes and n for no
    // return true if Y
}