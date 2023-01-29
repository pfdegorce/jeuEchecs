#include "../include/Player.hpp"

using namespace std;

Player::Player(string name, bool c): name_(name), color_(c){}

bool Player::get_color() const{
    return color_;
}

array<int,4> Player::give_move(){
    array<int,4> move;
    cout<<"Player "<< name_ <<" "<<"give the coordinates of the piece you want to move :" << endl;
    cout<<"x1 : ";
    cin >> move[0];
    cout<<"y1 : ";
    cin >> move[1];
    cout<<"Player "<< name_ <<" "<<"give the coordinates you want to reach :" << endl;
    cout<<"x2 : ";
    cin >> move[2];
    cout<<"y2 : ";
    cin >> move[3];
    return move;
}