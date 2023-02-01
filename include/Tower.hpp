#pragma once

#include "Piece.hpp"

class Tower : public Piece{
public:
    Tower(int x, int y, bool b);
    ~Tower() = default;
    bool valid_move(int x, int y, Piece*** board);
};