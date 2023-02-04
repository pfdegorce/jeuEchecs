#include "../include/Game.hpp"

using namespace std;

Game::Game(ChessBoard chessboard, bool player, vector<array<int,4>> list_moves): chessboard_(chessboard), player_(player), list_moves_(list_moves){}

Game::Game(){
    //Init Board
    ChessBoard board;
    board.print();
    bool ongoing_game=true;
    vector<array<int,4>> list_moves = {};

    //Init Players
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
    while(ongoing_game){
        nb_turn ++;
        //Choose player
        if(nb_turn%2 == 0){
            p_turn = &player2;
        } else {
            p_turn = &player1;
        }

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

/*bool Game::in_check(){
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
        if(!chessboard_.get_board()[x1][y1]->get_moved() && !chessboard_.get_board()[x2][y2]->get_moved()){
            //we verify if there are no pieces beetween the tower and the king
            if((x2 - x1)==0 && (y2 - y1>0)){
                int i=1;
                while(i<abs(y2 - y1)){
                    if(chessboard_.get_board()[x1][y1+i] != nullptr){
                    return true;
                    }
                i++;
                }
            }
            if((x2 - x1)==0 && (y2 - y1)<0){
                int i=1;
                while(i<abs(y2 - y1)){
                    if(chessboard_.get_board()[x1][y1-i] != nullptr){
                        return true;
                    }
                    i++;
                }
            }
        }
    }
    return false;
}
*/

