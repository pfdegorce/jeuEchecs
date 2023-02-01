#pragma once

#include "libs.hpp"

class Player{
private:
    std::string name_;
    bool color_; //white = false, black = true
public:
    Player(std::string name, bool c);
    ~Player() = default;

    bool get_color() const;

    void play_move(int x1, int y1, int x2, int y2);
    std::array<int,4> give_move();
};