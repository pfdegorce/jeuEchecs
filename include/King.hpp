#pragma once

#include "Piece.hpp"

class King : public Piece{
public:
    King(int x, int y, bool c);
    ~King() = default;
    bool valid_move(int x, int y, Piece* board[8][8]);
    //bool in_check(int x, int y, Piece* pieces[4*8]);
};