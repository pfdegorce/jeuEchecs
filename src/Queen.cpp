#include "../include/Queen.hpp"

using namespace std;

Queen::Queen(int x, int y, bool b): Piece(x, y, b){}

bool Queen::valid_move(int x, int y, Piece* board[8][8]){
    if (outside_board(x,y)){
        cout << "Invalid move - outside the chessboard" << endl;
        return false;
    }
    if (same_place(x,y)){
        cout << "invalid move - the piece doesn't move" << endl;
        return false;
    }
    if(abs(x - get_x()) == abs(y - get_y())){
        return true;
    }
    if(abs(x - get_x()) == 0 || abs(y - get_y()) == 0){
        return true;
    }
    cout << board[0][0] << endl;
    cout << "invalid move - move not autorized" << endl;
    return false;
}

