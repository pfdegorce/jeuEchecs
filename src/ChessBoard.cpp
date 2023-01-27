#include "../include/ChessBoard.hpp"

ChessBoard::ChessBoard(){
    for (size_t i = 0; i < CHESSBOARD_SIZE; i++){
        for (size_t j = 0; j < CHESSBOARD_SIZE; j++){
            board_[i][j] = nullptr;
        }
        
    }
    
    // Initialization of each peace
    list_piece_[0] = new Tower(0, 0, false);
    list_piece_[1] = new Tower(0, 7, false);
    list_piece_[2] = new Tower(7, 0, true);
    list_piece_[3] = new Tower(7, 7, true);
    list_piece_[4] = new Bishop(0, 2, false);
    list_piece_[5] = new Bishop(0, 5, false);
    list_piece_[6] = new Bishop(7, 2, true);
    list_piece_[7] = new Bishop(7, 5, true);
    list_piece_[8] = new Knight(0, 1, false);
    list_piece_[9] = new Knight(0, 6, false);
    list_piece_[10] = new Knight(7, 1, true);
    list_piece_[11] = new Knight(7, 6, true);
    list_piece_[12] = new Queen(0, 3, false);
    list_piece_[13] = new Queen(7, 3, true);
    list_piece_[14] = new King(0, 4, false);
    list_piece_[15] = new King(7, 4, true);
    
    for (size_t i = 0; i < CHESSBOARD_SIZE; i++){
        list_piece_[16+i] = new Pawn(1, i, false);
    }
    
    for (size_t i = 0; i < CHESSBOARD_SIZE; i++){
        list_piece_[24+i] = new Pawn(7, i, true);
    }
}
