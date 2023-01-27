#pragma once

#include "main.hpp"
#include "Piece.hpp"
#include "ChessBoard.hpp"

class Knight : public Piece
{
private:
    /* data */
public:
    Knight() = default;
    ~Knight() = default;
    bool valid_move(int x, int y, ChessBoard board);
};