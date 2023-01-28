#pragma once

#include "Bishop.hpp"
#include "King.hpp"
#include "Knight.hpp"
#include "Pawn.hpp"
#include "Queen.hpp"
#include "Tower.hpp"

#define CHESSBOARD_SIZE 8 //Don't update this const

class ChessBoard{
private:
    Piece* board_[CHESSBOARD_SIZE][CHESSBOARD_SIZE];
    Piece* list_piece_[4*CHESSBOARD_SIZE];
public:
    ChessBoard();
    ~ChessBoard() = default;
    ChessBoard& operator=(const ChessBoard& cb);

    void print();
    bool check_play(int x1, int y1, int x2, int y2);
    void play(int x1, int y1, int x2, int y2);
    bool is_free(int x, int y);
};

