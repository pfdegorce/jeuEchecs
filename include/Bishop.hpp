#pragma once

#include "main.hpp"
#include "Piece.hpp"
#include "ChessBoard.hpp"

class Bishop : public Piece
{
private:
    /* data */
public:
    Bishop() = default;
    ~Bishop() = default;
    bool valid_move(int x, int y, ChessBoard board);
};