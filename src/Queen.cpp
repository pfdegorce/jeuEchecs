#include "../include/Queen.hpp"

using namespace std;

Queen::Queen(int x, int y, bool b): Piece(x, y, b){}

bool Queen::valid_move(int x, int y, Piece*** board){
    if (outside_board(x,y)){
        cout << "Invalid move - outside the chessboard" << endl;
        return false;
    }
    if (same_place(x,y)){
        cout << "invalid move - the piece doesn't move" << endl;
        return false;
    }
    //If we want to move this piece on a diagonal
    if(abs(x - get_x()) == abs(y - get_y())){
        if(check_diagonal(get_x(), get_y(), x, y, board)){
            cout << "invalid move - there is a piece on your way" << endl;
            return false;
        }
        if(board[x][y]==nullptr || (board[x][y]->get_color() != get_color())){
            return true;
        }
    }
    //If we want to move this piece horizontally or vertically
    if((x - get_x()) == 0 || (y - get_y()) == 0){
        if(check_lines(get_x(), get_y(), x, y, board)){
            cout << "invalid move - there is a piece on your way" << endl;
            return false;
        }
        if(board[x][y]==nullptr || (board[x][y]->get_color() != get_color())){
            return true;
        }
    }
    cout << board[0][0] << endl;
    cout << "invalid move - move not autorized" << endl;
    return false;
}

