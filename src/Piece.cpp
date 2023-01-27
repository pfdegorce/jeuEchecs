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