#include "../include/Knight.hpp"

using namespace std;

Knight::Knight(int x, int y, bool color, bool moved): Piece(x, y, color, moved){}

bool Knight::valid_move(int x, int y, Piece*** board){
    if (outside_board(x,y)){
        cout << "Invalid move - outside the chessboard" << endl;
        return false;
    }
    if (same_place(x,y)){
        cout << "invalid move - the piece doesn't move" << endl;
        return false;
    }
    if(abs(x - get_x()) == 1 || abs(y - get_y()) == 2){
        if(board[x][y]==nullptr || (board[x][y]->get_color() != get_color())){
            return true;
        }
    }
    if(abs(x - get_x()) == 2 || abs(y - get_y()) == 1){
        if(board[x][y]==nullptr || (board[x][y]->get_color() != get_color())){
            return true;
        }
    }
    cout << "invalid move - move not autorized" << endl;
    return false;
}