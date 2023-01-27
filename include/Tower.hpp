#pragma once

#include "main.hpp"
#include "Piece.hpp"
#include "ChessBoard.hpp"

class Tower : public Piece
{
private:
    /* data */
public:
    Tower() = delete;
    Tower(int x, int y, bool b);
    ~Tower() = default;
    bool valid_move(int x, int y, Piece* board[8][8]);
};