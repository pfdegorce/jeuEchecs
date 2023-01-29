#pragma once

#include "main.hpp"
#include "ChessBoard.hpp"

class Game{
private:
    ChessBoard chessboard_;
    bool player_; //white = false, black = true
public:
    Game(ChessBoard chessboard, bool player);
    ~Game() = default;
    bool get_player() const;
    bool in_check() const;
};