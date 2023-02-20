#pragma once

#include "libs.hpp"
#include "Piece.hpp"

class King : public Piece{
public:
    King(int x, int y, bool color, bool moved);
    ~King() = default;
    bool valid_move(int x, int y, Piece*** board);
};

typedef std::shared_ptr<King> King;