#pragma once

#include "Piece.hpp"

class Knight : public Piece{
public:
    Knight(int x, int y, bool c);
    ~Knight() = default;
    bool valid_move(int x, int y, Piece*** board);
    bool get_moved();
};