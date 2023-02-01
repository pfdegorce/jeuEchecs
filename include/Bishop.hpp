#pragma once

#include "Piece.hpp"

class Bishop : public Piece {
public:
    Bishop(int x, int y, bool c);
    ~Bishop() = default;
    bool valid_move(int x, int y, Piece*** board);
    bool get_moved();
};