#include "../include/main.hpp"

using namespace std;

int main() {
    //Init the game
    ChessBoard game;
    game.print();
    bool ongoing_game=true;
    vector<array<int,4>> list_moves = {};
    //init players
    string player1_name, player2_name;
    cout << "White player name: "<< endl;
    cin >> player1_name;
    cout << "Black player name: "<< endl;
    cin >> player2_name;
    Player player1(player1_name, false);
    Player player2(player2_name, true);
    //game
    while(ongoing_game){
        //White player move
        array<int,4> move1=player1.give_move();
        while(game.get_board()[move1[0]][move1[1]]->get_color()!=player1.get_color()){
            cout<<"Invalid move - you can't move an opponent's piece "<<endl;
            move1=player1.give_move();
        }
        if(game.verified_castling(move1[0], move1[1], move1[2], move1[3])){
            list_moves.push_back(move1);
            game.get_board()[move1[0]][move1[1]]->set_moved();
            game.get_board()[move1[2]][move1[3]]->set_moved();
            game.play_castling(move1[0], move1[1], move1[2], move1[3]);
        }
        while(!(game.get_board()[move1[0]][move1[1]]->valid_move(move1[2], move1[3], game.get_board()))){
            move1=player1.give_move();
        }
        list_moves.push_back(move1);
        game.get_board()[move1[0]][move1[1]]->set_moved();
        game.play(move1[0], move1[1], move1[2], move1[3]);
        game.print();

        //Black player move
        array<int,4> move2=player2.give_move();
        while(game.get_board()[move2[0]][move2[1]]->get_color()!=player2.get_color()){
            cout<<"Invalid move - you can't move an opponent's piece "<<endl;
            move2=player2.give_move();
        }
        if(game.verified_castling(move2[0], move2[1], move2[2], move2[3])){
            list_moves.push_back(move2);
            game.get_board()[move2[0]][move2[1]]->set_moved();
            game.get_board()[move2[2]][move2[3]]->set_moved();
            game.play_castling(move2[0], move2[1], move2[2], move2[3]);
        } else {
            while(!(game.get_board()[move2[0]][move2[1]]->valid_move(move2[2], move2[3], game.get_board()))){
                move2=player2.give_move();
            }
            list_moves.push_back(move2);
            game.get_board()[move2[0]][move2[1]]->set_moved();
            game.play(move2[0], move2[1], move2[2], move2[3]);
        }

        game.print();
    }
    return 0;
}