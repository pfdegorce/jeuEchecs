#include "../include/Game.hpp"

using namespace std;

Game::Game(ChessBoard chessboard, bool player, vector<array<int,4>> list_moves): chessboard_(chessboard), player_(player), list_moves_(list_moves){}

Game::Game(){
    //Init Board
    ChessBoard board;
    board.print();
    vector<array<int,4>> list_moves = {};

    //Init Player
    string player1_name, player2_name;
    cout << "White player name: "<< endl;
    cin >> player1_name;
    cout << "Black player name: "<< endl;
    cin >> player2_name;
    Player player1(player1_name, false);
    Player player2(player2_name, true);
    
    //Loop Game
    Player* p_turn;
    size_t nb_turn = 0;
    array<int, 4> move;
    bool ongoing_game=true;
    while(ongoing_game){
        nb_turn ++;
        //Choose player
        if(nb_turn%2 == 0){
            p_turn = &player2;
        } else {
            p_turn = &player1;
        }
        //cout << "Loop" << endl;

        /*if(board.in_check(nb_turn%2)){
            cout << "King is in check" << endl;
        } else {
            //DO SOMETHING
        }*/
        //cout << "End" <<endl;

        move = p_turn->give_move();
        while(move[0] == 8 || move[1] == 8 || move[2] == 8 || move[3] == 8){
            cout<<"Invalid coordinates - please enter validate coordinate (ex: A1)" << endl;
            move=p_turn->give_move();
        }
        
        while(board.found_piece(move[0], move[1]) == nullptr){
            cout<<"Invalid coordinates - no piece found on the coordinate" << endl;
            move=p_turn->give_move();
        }
        
        while(board.get_board()[move[0]][move[1]]->get_color()!=p_turn->get_color()){
            cout<<"Invalid move - you can't move an opponent's piece "<<endl;
            move=p_turn->give_move();
        }

        if(board.verified_castling(move[0], move[1], move[2], move[3])){
            list_moves.push_back(move);
            board.get_board()[move[0]][move[1]]->set_moved();
            board.get_board()[move[2]][move[3]]->set_moved();
            board.play_castling(move[0], move[1], move[2], move[3]);
        } else {
            while(!(board.get_board()[move[0]][move[1]]->valid_move(move[2], move[3], board.get_board()))){
                move=p_turn->give_move();
            }
            list_moves.push_back(move);
            board.get_board()[move[0]][move[1]]->set_moved();
            board.play(move[0], move[1], move[2], move[3]);
        }
        board.print();
    }
}

bool Game::get_player() const{
    return player_;
}

vector<array<int,4>> Game::get_moves() const{
    return list_moves_;
}

void Game::add_move(array<int,4> move){
    list_moves_.push_back(move);
}