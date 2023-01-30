#include "../include/Piece.hpp"


Piece::Piece(int x, int y, bool b) : x_(x), y_(y), color_(b){
}

int Piece::get_x() const {
    return x_;
}

void Piece::set_x(int x){
    x_=x;
}

int Piece::get_y() const {
    return y_;
}

void Piece::set_y(int y){
    y_=y;
}

bool Piece::get_color() const{
    return color_;
}

bool Piece::outside_board(int x, int y){
    if (x<0 || x>7 || y<0  || y>7){
        return true;
    }
    return false;
}

bool Piece::same_place(int x, int y){
    if (x == this->get_x() && y == this->get_y()){
        return true;
    }
    return false;
}

bool Piece::check_diagonal(int x1, int y1, int x2, int y2, Piece* board[8][8]){
    //If we want to move from (x1,y1) to (x2,y2) on the superior right diagonal 
        if((x2 - x1)<0 && (y2 - y1>0)){
            int i=1;
            while(i<abs(x2- x1)){
                if(board[x1-i][y1+i] != nullptr){
                    return true;
                }
                i++;
            }
        }
    //If we want to move from (x1,y1) to (x2,y2) on the superior left diagonal 
        if((x2 - x1)<0 && (y2 - y1)<0){
            int i=1;
            while(i<abs(x2 - x1)){
                if(board[x1-i][y1-i] != nullptr){
                    return true;
                }
                i++;
            }
        }
    //If we want to move from (x1,y1) to (x2,y2) on the inferior right diagonal 
        if((x2 - x1)>0 && (y2 - y1)>0 ){
            int i=1;
            while(i<abs(x2 - x1)){
                if(board[x1+i][y1+i] != nullptr){
                    return true;
                }
                i++;
            }
        }
    //If we want to move from (x1,y1) to (x2,y2) on the inferior left diagonal 
        if((x2 - x1)>0 && (y2 - y1)<0 ){
            int i=1;
            while(i<abs(x2 - x1)){
                if(board[x1+i][x2-i] != nullptr){
                    return true;
                }
                i++;
            }
        }
    return false;
}

bool Piece::check_lines(int x1, int y1, int x2, int y2, Piece* board[8][8]) {

    //If we want to move from (x1,y1) to (x2,y2) horizontally

    //If we want to move on the right
        if((x2 - x1)==0 && (y2 - y1>0)){
            int i=1;
            while(i<abs(y2 - y1)){
                if(board[x1][y1+i] != nullptr){
                    return true;
                }
                i++;
            }
        }
    //If we want to move on the left
        if((x2 - x1)==0 && (y2 - y1)<0){
            int i=1;
            while(i<abs(y2 - y1)){
                if(board[x1][y1-i] != nullptr){
                    return true;
                }
                i++;
            }
        }

    //If we want to move from (x1,y1) to (x2,y2) horizontally

    //If we want to move the piece up
        if((x2 - x1)<0 && (y2 - y1)==0 ){
            int i=1;
            while(i<abs(x2 - x1)){
                if(board[x1-i][y1] != nullptr){
                    return true;
                }
                i++;
            }
        }
    //If we want to move the piece down 
        if((x2 - x1)>0 && (y2 - y1)==0 ){
            int i=1;
            while(i<abs(x2 - x1)){
                if(board[x1+i][y1] != nullptr){
                    return true;
                }
                i++;
            }
        }
        return false;
}

