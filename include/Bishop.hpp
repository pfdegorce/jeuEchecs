#pragma once

#include "main.hpp"
#include "Piece.hpp"
class Blabla{};

class Bishop : public Blabla {
public:
    Bishop() = delete;
    Bishop(int x, int y, bool c);
    ~Bishop() = default;
    bool valid_move(int x, int y);
};