#pragma once

#include "main.hpp"
#include "Piece.hpp"

class Player{
private:
    string name_;
    bool color_; //white = false, black = true
public:
    Player(string name, bool c);
    ~Player() = default;

    bool get_color() const;

    void play_move();
};