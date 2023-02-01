#pragma once

#include "libs.hpp"
#include "Piece.hpp"

class Tower : public Piece{
private:
    bool already_moved_;
public:
    Tower(int x, int y, bool b, bool moved);
    ~Tower() = default;
    bool get_moved() const;
    bool valid_move(int x, int y, Piece*** board);
    bool get_moved();
};