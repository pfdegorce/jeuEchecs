#include "King.hpp"

bool King::valid_move(int x, int y){
    if (x<0 || x>7 || y<0  || y>7){
        return false;
    }
    if(abs(x - x_) == 1 && abs(y - y_) == 1){
        return true;
    }
    if(abs(x - x_) == 1 && abs(y - y_) == 0){
        return true;
    }
    if(abs(x - x_) == 0 && abs(y - y_) == 1){
        return true;
    }

    return false;
}
