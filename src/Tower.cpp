#include "../include/Tower.hpp"

using namespace std;

bool Queen::valid_move(int x, int y){
    if (outside_board(x,y)){
        cout << "Invalid move - outside the chessboard" << endl;
        return false;
    }
    if (same_place(x,y)){
        cout << "invalid move - the piece doesn't move" << endl;
        return false;
    }
    if(abs(x - get_x()) == 0 || abs(y - get_y()) == 0){
        return true;
    }
    cout << "invalid move - move not autorized" << endl;
    return false;
}
