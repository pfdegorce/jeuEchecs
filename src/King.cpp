#include "../include/King.hpp"

using namespace std;

bool King::valid_move(int x, int y){
    if (outside_board(x,y)){
        cout << "Invalid move - outside the chessboard" << endl;
        return false;
    }
    if (same_place(x,y)){
        cout << "invalid move - the piece doesn't move" << endl;
        return false;
    }
    if(abs(x - get_x()) == 1 && abs(y - get_y()) == 1){
        return true;
    }
    if(abs(x - get_x()) == 1 && abs(y - get_y()) == 0){
        return true;
    }
    if(abs(x - get_x()) == 0 && abs(y - get_y()) == 1){
        return true;
    }

    return false;
}