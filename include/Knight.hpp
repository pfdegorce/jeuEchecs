#pragma once

#include "main.hpp"
#include "Piece.hpp"

class Knight : public Piece
{
private:
    /* data */
public:
    Knight() = delete;
    Knight(int x, int y, bool c);
    ~Knight() = default;
    bool valid_move(int x, int y, Piece* board[8][8]);
};