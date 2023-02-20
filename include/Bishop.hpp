#pragma once

#include "libs.hpp"
#include "Piece.hpp"

class Bishop : public Piece {
public:
    Bishop(int x, int y, bool color, bool moved);
    ~Bishop() = default;
    bool valid_move(int x, int y, Piece*** board);
};

typedef std::shared_ptr<Bishop> BishopPtr;