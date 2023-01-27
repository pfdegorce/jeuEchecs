#include "../include/Knight.hpp"

using namespace std;

bool Knight::valid_move(int x, int y){
    if (outside_board(x,y)){
        cout << "Invalid move - outside the chessboard" << endl;
        return false;
    }
    if (same_place(x,y)){
        cout << "invalid move - the piece doesn't move" << endl;
        return false;
    }
    /*if(abs(x - get_x()) == 1 || abs(y - get_y()) == 2){
        if(board.is_free(x,y)){
            return true;
        }
        else if(board[x][y]->get_color() != get_color()){
            return true;
        };
        return false;
    }
        if(abs(x - get_x()) == 2 || abs(y - get_y()) == 1){
        return true;
    }*/
    cout << "invalid move - move not autorized" << endl;
    return false;
}

Knight::Knight(int x, int y, bool b): Piece(x, y, b){}