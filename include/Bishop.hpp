#pragma once

#include "libs.hpp"
#include "Piece.hpp"

class Bishop : public Piece {
public:
    Bishop(int x, int y, bool c);
    ~Bishop() = default;
    bool get_moved() const;
    bool valid_move(int x, int y, Piece*** board);
};