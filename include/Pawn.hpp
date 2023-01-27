#pragma once

#include "main.hpp"
#include "Piece.hpp"
#include "ChessBoard.hpp"

class Pawn : public Piece
{
private:
    bool already_moved_;
public:
    Pawn() = default;
    ~Pawn() = default;
    bool valid_move(int x, int y, ChessBoard board);
};