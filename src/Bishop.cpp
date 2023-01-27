#include "../include/Bishop.hpp"

using namespace std;

bool Bishop::valid_move(int x, int y){
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
    return false;
}
