#pragma once

#include "libs.hpp"
#include "Piece.hpp"

class Queen : public Piece{
public:
    Queen(int x, int y, bool b);
    ~Queen() = default;
    bool valid_move(int x, int y, Piece*** board);
    bool get_moved() const;
};