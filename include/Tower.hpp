#pragma once

#include "libs.hpp"
#include "Piece.hpp"

class Tower : public Piece{
public:
    Tower(int x, int y, bool b, bool moved);
    ~Tower() = default;
    bool valid_move(int x, int y, Piece*** board);
};