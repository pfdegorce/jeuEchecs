#pragma once

#include "main.hpp"
#include "Piece.hpp"
#include "ChessBoard.hpp"

class Bishop : public Piece
{
private:
    /* data */
public:
    Bishop() = delete;
    Bishop(int x, int y, bool c);
    ~Bishop() = default;
    bool valid_move(int x, int y);
};