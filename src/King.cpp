#include "../include/King.hpp"

using namespace std;

King::King(int x, int y, bool b, bool moved): Piece(x, y, b), already_moved_(moved){}

bool King::get_moved() const{
    return already_moved_;
}

bool King::valid_move(int x, int y, Piece*** board){
    if (outside_board(x,y)){
        cout << "Invalid move - outside the chessboard" << endl;
        return false;
    }
    if (same_place(x,y)){
        cout << "invalid move - the piece doesn't move" << endl;
        return false;
    }
    if(abs(x - get_x()) == 1 && abs(y - get_y()) == 1){
        if(board[x][y]==nullptr || (board[x][y]->get_color() != get_color())){
            return true;
        }
    }
    if(abs(x - get_x()) == 1 && abs(y - get_y()) == 0){
        if(board[x][y]==nullptr || (board[x][y]->get_color() != get_color())){
            return true;
        }
    }
    if(abs(x - get_x()) == 0 && abs(y - get_y()) == 1){
        if(board[x][y]==nullptr || (board[x][y]->get_color() != get_color())){
            return true;
        }
    }
    cout << "invalid move - move not autorized" << endl;
    return false;
}

