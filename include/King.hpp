#pragma once

#include "Piece.hpp"

class King : public Piece{
private:
    bool already_moved_;
public:
    King(int x, int y, bool c, bool moved);
    ~King() = default;
    bool valid_move(int x, int y, Piece*** board);
};