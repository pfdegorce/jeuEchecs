#include "../include/Player.hpp"

using namespace std;

Player::Player(string name, bool c): name_(name), color_(c){}

bool Player::get_color() const{
    return color_;
}

array<int,4> Player::give_move(){
    array<char,4> move;
    array<int, 4> move_to_return;
    cout<<"Player "<< name_ <<" "<<"give the coordinates of the piece you want to move :" << endl;
    cout<<"Start position : ";
    cin >> move[0];
    cin >> move[1];
    cout<<"Player "<< name_ <<" "<<"give the coordinates you want to reach :" << endl;
    cout<<"End position : ";
    cin >> move[2];
    cin >> move[3];

    transform(move[0], move[1]);
    transform(move[2], move[3]);

    for (size_t i = 0; i < 4; i++){
        move_to_return[i] = move[i] - '0';
    }

    return move_to_return;
}

void Player::transform(char& x, char& y){
    char temp;
    temp = x;
    x = y;
    y = temp;
    switch (y){
        case 'A':
            y = '0';
            break;
        case 'B':
            y = '1';
            break;
        case 'C':
            y = '2';
            break;
        case 'D':
            y = '3';
            break;
        case 'E':
            y = '4';
            break;
        case 'F':
            y = '5';
            break;
        case 'G':
            y = '6';
            break;
        case 'H':
            y = '7';
            break;
        default:
            y = '8';
            break;
    }

    switch (x){
        case '1':
            x = '7';
            break;
        case '2':
            x = '6';
            break;
        case '3':
            x = '5';
            break;
        case '4':
            x = '4';
            break;
        case '5':
            x = '3';
            break;
        case '6':
            x = '2';
            break;
        case '7':
            x = '1';
            break;
        case '8':
            x = '0';
            break;
        default:
            x = '8';
            break;
    }
}