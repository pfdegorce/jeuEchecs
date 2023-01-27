#include "../include/Piece.hpp"


Piece::Piece(/* args */)
{
}

Piece::~Piece()
{
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