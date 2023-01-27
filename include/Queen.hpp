#pragma once

#include "main.hpp"
#include "Piece.hpp"

class Queen : public Piece
{
private:
    /* data */
public:
    Queen() = default;
    ~Queen() = default;
    bool valid_move(int x, int y);

};