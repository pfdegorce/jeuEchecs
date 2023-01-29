#pragma once

#include "main.hpp"
#include "Piece.hpp"

class Queen : public Piece
{
private:
    /* data */
public:
    Queen() = delete;
    Queen(int x, int y, bool b);
    ~Queen() = default;
    bool valid_move(int x, int y, Piece* board[8][8]);

};