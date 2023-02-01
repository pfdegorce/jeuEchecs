#include "../include/Pawn.hpp"

using namespace std;


Pawn::Pawn(int x, int y, bool color, bool moved): Piece(x, y, color, moved){}

bool Pawn::valid_move(int x, int y, Piece*** board){
    if (outside_board(x,y)){
        cout << "Invalid move - outside the chessboard" << endl;
        return false;
    }
    if (same_place(x,y)){
        cout << "invalid move - the piece doesn't move" << endl;
        return false;
    }
    //If the pawn is white
    if(!(get_color())){
        //if we want to move the piece two squares
        if(!(get_moved()) && (x==get_x()-2) && (y==get_y())){
            if((board[get_x()-1][get_y()] != nullptr) || (board[get_x()-2][get_y()] != nullptr)){
                cout << "invalid move - there is a piece on your way" << endl;
                return false; 
            }
            return true;
        }
        //if we want to move the piece one square
        if((x==get_x()-1) && (y==get_y())){
            if(board[get_x()-1][get_y()] != nullptr){
                cout << "invalid move - there is a piece on your way" << endl;
                return false; 
            }
            return true;
        }
        //if there is a piece that the pawn can eat
        if((x==get_x()-1) && ((y==get_y()-1) || (y==get_y()+1))){
            if(board[x][y]!=nullptr && (board[x][y]->get_color() != get_color())){
                return true;
            }
        }
    }

    //If the pawn is black
    if(get_color()){
        //if we want to move the piece two squares
        if(!(get_moved()) && (x==get_x()+2) && (y==get_y())){
            if((board[get_x()+1][get_y()] != nullptr) || (board[get_x()+2][get_y()] != nullptr)){
                cout << "invalid move - there is a piece on your way" << endl;
                return false; 
            }
            return true;
        }
        //if we want to move the piece one square
        if((x==get_x()+1) && (y==get_y())){
            if(board[get_x()+1][get_y()] != nullptr){
                cout << "invalid move - there is a piece on your way" << endl;
                return false; 
            }
            return true;
        }
        //if there is a piece that the pawn can eat
        if((x==get_x()+1) && ((y==get_y()-1) || (y==get_y()+1))){
            if(board[x][y]!=nullptr && (board[x][y]->get_color() != get_color())){
                return true;
            }
        }
    } 
    cout << "invalid move - move not autorized" << endl;
    return false;
}