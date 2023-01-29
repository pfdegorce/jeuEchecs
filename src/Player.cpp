#include "../include/Player.hpp"

using namespace std;

Player::Player(string name, bool c): name_(name), color_(c){}

bool Player::get_color() const{
    return color_;
}

void Player::play_move(){
    int x1, x2, y1, y2;
    cout<<"Player "<< name_ <<" "<<"give the coordinates of the piece you want to move :" << endl;
    cout<<"x : ";
    cin >> x1;
    cout<<"y : ";
    cin >> y1;
    cout<<"Player "<< name_ <<" "<<"give the coordinates you want to reach :" << endl;
    cout<<"x : ";
    cin >> x2;
    cout<<"y : ";
    cin >> y2;    
}