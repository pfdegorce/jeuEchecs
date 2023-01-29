#include "../include/Game.hpp"

using namespace std;

Game::Game(ChessBoard chessboard, bool player): chessboard_(chessboard), player_(player){}

bool Game::get_player() const{
    return player_;
}