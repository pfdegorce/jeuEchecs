#pragma once

#include "Piece.hpp"

class Tower : public Piece{
private:
    bool already_moved_;
public:
    Tower(int x, int y, bool b, bool moved);
    ~Tower() = default;
    bool valid_move(int x, int y, Piece*** board);
};