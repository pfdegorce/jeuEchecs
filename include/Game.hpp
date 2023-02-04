#pragma once

#include "libs.hpp"
#include "ChessBoard.hpp"
#include "Player.hpp"

class Game{
private:
    ChessBoard chessboard_;
    bool player_; //white = false, black = true
    std::vector<std::array<int,4>> list_moves_;

public:
    Game(ChessBoard chessboard, bool player, std::vector<std::array<int,4>> list_moves);
    ~Game() = default;
    bool get_player() const;
    std::vector<std::array<int,4>> get_moves() const;
    void add_move(std::array<int,4> move);
    //bool in_check();
    //bool verified_castleling(int x1, int y1, int x2, int y2);
};