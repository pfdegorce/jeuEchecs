#pragma once

#include "main.hpp"

class Piece{
private:
    size_t x_; //pos x
    size_t y_; //pos y
    bool color_; //white = false, black = true
public:
    Piece(int x, int y, bool c);
    ~Piece() = default;

    int get_x() const;
    void set_x(int x);
    int get_y() const;
    void set_y(int y);
    bool get_color() const;

    virtual bool valid_move(int x, int y, Piece* board[8][8]) = 0;

    bool outside_board(int x, int y);
    bool same_place(int x, int y);
    void move(int x, int y);
};
