#pragma once

#include "main.hpp"

class Piece
{
private:
    bool color_; //white = false, black = true
    size_t x_; //pos x
    size_t y_; //pos y
public:
    Piece() = default;
    ~Piece() = default;
    Piece(int x, int y, bool c);
    int get_x() const;
    void set_x(int x);
    int get_y() const;
    void set_y(int y);
    bool valid_move(int x, int y) = 0;
    bool outside_board(int x, int y);
    bool same_place(int x, int y);
    void move(int x, int y);
};
