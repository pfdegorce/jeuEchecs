#pragma once

#include "main.hpp"
#include "ChessBoard.hpp"

class Game{
private:
    ChessBoard chessboard_;
    bool player_; //white = false, black = true
    std::vector<std::array<int,4>> list_moves_;

public:
    Game(ChessBoard chessboard, bool player, std::vector<std::array<int,4>> list_moves);
    ~Game() = default;
    bool get_player() const;
    bool in_check();
    bool verified_castleling(int x1, int y1, int x2, int y2);
};