#pragma once

#include "Bishop.hpp"
#include "King.hpp"
#include "Knight.hpp"
#include "Pawn.hpp"
#include "Queen.hpp"
#include "Tower.hpp"

using namespace std;

#define CHESSBOARD_SIZE 8 //Don't update this const

class ChessBoard{
private:
    Piece*** board_;
    Piece** list_piece_[4*CHESSBOARD_SIZE];
public:
    ChessBoard(std::string board_str);
    ChessBoard();
    ~ChessBoard() = default;
    ChessBoard& operator=(const ChessBoard& cb);

    void init_board(std::string board_str);
    const char* piece_to_char(int x, int y);
    Piece*** get_board();
    Piece** get_list_piece();
    void print();
    bool check_play(int x1, int y1, int x2, int y2);
    void play(int x1, int y1, int x2, int y2);
    bool is_free(int x, int y);
};

