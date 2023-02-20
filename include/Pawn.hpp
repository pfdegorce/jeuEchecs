#pragma once

#include "libs.hpp"
#include "Piece.hpp"

class Pawn : public Piece{
public:
    Pawn(int x, int y, bool color, bool moved);
    ~Pawn() = default;
    bool valid_move(int x, int y, Piece*** board);
};

typedef std::shared_ptr<Pawn> Pawn;