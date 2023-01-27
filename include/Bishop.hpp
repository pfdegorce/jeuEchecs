#pragma once

#include "main.hpp"
#include "Piece.hpp"

class Bishop : public Piece {
public:
    Bishop() = delete;
    Bishop(int x, int y, bool c);
    ~Bishop() = default;
    bool valid_move(int x, int y, Piece* board[8][8]);
};