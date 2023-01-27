#pragma once

#include "main.hpp"
#include "ChessBoard.hpp"

class Piece
{
private:
    size_t x_; //pos x
    size_t y_; //pos y
    bool color_; //white = false, black = true
public:
    Piece() = delete;
    ~Piece() = default;
    Piece(int x, int y, bool c);

    int get_x() const;
    void set_x(int x);
    int get_y() const;
    void set_y(int y);
    bool get_color() const;

    bool valid_move(int x, int y, ChessBoard board) = 0;
    bool outside_board(int x, int y);
    bool same_place(int x, int y);
    void move(int x, int y);
};
