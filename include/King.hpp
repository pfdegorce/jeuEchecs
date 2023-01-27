#pragma once

#include "main.hpp"
#include "Piece.hpp"
#include "ChessBoard.hpp"


class King : public Piece
{
private:
    /* data */
public:
    King() = delete;
    King(int x, int y, bool c);
    ~King() = default;
    bool valid_move(int x, int y);

};