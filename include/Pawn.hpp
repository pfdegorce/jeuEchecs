#pragma once

#include "libs.hpp"
#include "Piece.hpp"

class Pawn : public Piece{
private:
    bool already_moved_;
public:
    Pawn(int x, int y, bool color, bool moved);
    ~Pawn() = default;
    bool valid_move(int x, int y, Piece*** board);
    bool get_moved() const;
};