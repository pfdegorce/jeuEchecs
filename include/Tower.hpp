#pragma once

#include "main.hpp"
#include "Piece.hpp"

class Tower : public Piece
{
private:
    /* data */
public:
    Tower() = default;
    ~Tower() = default;
    bool valid_move(int x, int y);
};