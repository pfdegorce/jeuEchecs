#include "../include/Bishop.hpp"

using namespace std;

Bishop::Bishop(int x, int y, bool b): Piece(x, y, b){}

bool Bishop::valid_move(int x, int y, Piece* board[8][8]){
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
    cout << "invalid move - move not autorized" << endl;
    return false;
}

