#include "../include/Bishop.hpp"

using namespace std;

Bishop::Bishop(int x, int y, bool b): Piece(x, y, b){}

bool Bishop::valid_move(int x, int y, Piece* board[8][8]){
    if (outside_board(x,y)){
        cout << "Invalid move - outside the chessboard" << endl;
        return false;
    }

    if (same_place(x,y)){
        cout << "invalid move - the piece doesn't move" << endl;
        return false;
    }

    if(abs(x - get_x()) == abs(y - get_y())){
        if((x - get_x())<0 && (y - get_y()>0)){
            int i=1;
            while(i<abs(x- get_x())){
                if(board[get_x()-i][get_y()+i] != nullptr){
                    return false;
                }
                i++;
            }
        }

        if((x - get_x())<0 && (y - get_y()<0)){
            int i=1;
            while(i<abs(x- get_x())){
                if(board[get_x()-i][get_y()-i] != nullptr){
                    return false;
                }
                i++;
            }
        }

        if((x - get_x())>0 && (y - get_y())>0 ){
            int i=1;
            while(i<abs(x- get_x())){
                if(board[get_x()+i][get_y()+i] != nullptr){
                    return false;
                }
                i++;
            }
        }

        if((x - get_x())>0 && (y - get_y())<0 ){
            int i=1;
            while(i<abs(x- get_x())){
                if(board[get_x()+i][get_y()-i] != nullptr){
                    return false;
                }
                i++;
            }
        }

        if(board[x][y]==nullptr || (board[x][y]->get_color() != get_color())){
            return true;
        }
            
    }
    
    cout << "invalid move - move not autorized" << endl;
    return false;
}

