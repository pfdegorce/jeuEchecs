#pragma once

#include "libs.hpp"
#include "Bishop.hpp"
#include "King.hpp"
#include "Knight.hpp"
#include "Pawn.hpp"
#include "Queen.hpp"
#include "Tower.hpp"

using namespace std;

class ChessBoard{
private:
    Piece*** board_;
    Piece** list_piece_[32];

public:
    ChessBoard();
    ChessBoard(std::string board_str);
    ~ChessBoard() = default;
    //ChessBoard& operator=(const ChessBoard& cb);

    void init_board(std::string board_str);
    const char* piece_to_char(int x, int y);
    Piece*** get_board();
    Piece** get_list_piece();
    void print();
    bool check_play(int x1, int y1, int x2, int y2);
    bool play(int x1, int y1, int x2, int y2); //Return true is the piece has moved
    bool is_free(int x, int y);
    bool is_threatened(int x, int y);
    Piece* found_piece(int x, int y); //Return nullptr if it doesn't found Piece
};

