#include "../include/Pawn.hpp"

using namespace std;

bool Pawn::valid_move(int x, int y, Piece* board[8][8]){
    if (outside_board(x,y)){
        cout << "Invalid move - outside the chessboard" << endl;
        return false;
    }
    if (same_place(x,y)){
        cout << "invalid move - the piece doesn't move" << endl;
        return false;
    }
    cout << "invalid move - move not autorized" << endl;
    return false;
}

Pawn::Pawn(int x, int y, bool b): Piece(x, y, b){}