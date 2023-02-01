#pragma once

#include "Piece.hpp"

class King : public Piece{
public:
    King(int x, int y, bool c);
    ~King() = default;
    bool valid_move(int x, int y, Piece*** board);
};