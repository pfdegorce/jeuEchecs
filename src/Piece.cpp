#include "../include/Piece.hpp"


Piece::Piece(int x, int y, bool b) : x_(x), y_(y), color_(b){
}

Piece::~Piece(){
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

bool get_color() const{
    return color_;
}

bool Piece::outside_board(int x, int y){
    if (x<0 || x>7 || y<0  || y>7){
        return true;
    }
}

bool Piece::same_place(int x, int y){
    if (x == x_ && y == y_){
        return true;
    }
}