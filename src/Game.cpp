#include "../include/Game.hpp"

using namespace std;

Game::Game(ChessBoard chessboard, bool player, vector<array<int,4>> list_moves): chessboard_(chessboard), player_(player), list_moves_(list_moves){}

bool Game::get_player() const{
    return player_;
}

bool Game::in_check(){
    int king_x, king_y;
    for(int i = 0; i<32 ;i++){
        if ((typeid(*chessboard_.get_list_piece()[i]) == typeid(King)) && ((*chessboard_.get_list_piece()[i]).get_color()==player_)){
            king_x = (*chessboard_.get_list_piece())->get_x();
            king_y = (*chessboard_.get_list_piece())->get_y();
        }
    }
    for(int i = 0; i<32 ;i++){
        if (((*chessboard_.get_list_piece()[i]).valid_move(king_x, king_y, chessboard_.get_board())) && ((*chessboard_.get_list_piece()[i]).get_color()!=player_)){
            return true;
        }
    }
    return false;
}

bool Game::verified_castleling(int x1, int y1, int x2, int y2){
    //we verify that we change a king with a tower with the same color
    if ((((typeid(chessboard_.get_board()[x1][y1]) == typeid(King)) && (typeid(chessboard_.get_board()[x2][y2]) == typeid(Tower))) || ((typeid(chessboard_.get_board()[x1][y1]) == typeid(Tower)) && (typeid(chessboard_.get_board()[x2][y2]) == typeid(King)))) && chessboard_.get_board()[x1][y1]->get_color() == chessboard_.get_board()[x2][y2]->get_color()){
        //we verify if the two pieces didn't move
//        if()
    }
    return false;
}


