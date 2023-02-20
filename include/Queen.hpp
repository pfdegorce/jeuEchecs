#pragma once

#include "libs.hpp"
#include "Piece.hpp"

class Queen : public Piece{
public:
    Queen(int x, int y, bool color, bool moved);
    ~Queen() = default;
    bool valid_move(int x, int y, Piece*** board);
};


typedef std::shared_ptr<Queen> QueenPtr;