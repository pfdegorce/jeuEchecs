#pragma once

#include "main.hpp"
#include "Piece.hpp"

class Pawn : public Piece
{
private:
    bool already_moved_;
public:
    Pawn() = delete;
    Pawn(int x, int y, bool c);
    ~Pawn() = default;
    bool valid_move(int x, int y, Piece* board[8][8]);
};