#pragma once

#include "libs.hpp"
#include "Piece.hpp"

class Knight : public Piece{
public:
    Knight(int x, int y, bool c);
    ~Knight() = default;
    bool get_moved() const;
    bool valid_move(int x, int y, Piece*** board);
};