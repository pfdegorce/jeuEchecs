#pragma once

#include "libs.hpp"
#include "Piece.hpp"

class Knight : public Piece{
public:
    Knight(int x, int y, bool color, bool moved);
    ~Knight() = default;
    bool valid_move(int x, int y, Piece*** board);
};