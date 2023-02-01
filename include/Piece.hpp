#pragma once

#include "libs.hpp"

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
    virtual bool get_moved() const = 0;
    virtual bool valid_move(int x, int y, Piece*** board) = 0;

    bool outside_board(int x, int y);
    bool same_place(int x, int y);
    //check if there is a piece on the diagonal beetween (x1,y1) and (x2,y2) (true = there is a piece, false = no pieces on the way)
    bool check_diagonal(int x1, int y1, int x2, int y2, Piece*** board);
    //check if there is a piece on the horizontal or vertical line beetween (x1,y1) and (x2,y2) (true = there is a piece, false = no pieces on the way)
    bool check_lines(int x1, int y1, int x2, int y2, Piece*** board);
    void move(int x, int y);
};
