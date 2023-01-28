#include "../include/ChessBoard.hpp"

using namespace std;


ChessBoard::ChessBoard(string board_str) : board_(), list_piece_() {
    init_board(board_str);
}

ChessBoard::ChessBoard() : board_(), list_piece_() {
    std::string board_str = 
    "THBQKHB\n"
    "PPPPPPP\n"
    "........\n"
    "........\n"
    "........\n"
    "........\n"
    "ppppppp\n"
    "thbqkhb\n";
    init_board(board_str);
}

void ChessBoard::init_board(string board_str) {
    size_t count_piece = 0;
    char piece_char;
    bool color;
    Piece* piece;

    for (size_t i = 0; i < CHESSBOARD_SIZE; i++){
        for (size_t j = 0; j < CHESSBOARD_SIZE; j++){
            board_[i][j] = nullptr;
        }
    }

    //Init each piece
    for (size_t i = 0; i < CHESSBOARD_SIZE; i++) {
        for (size_t j = 0; j < CHESSBOARD_SIZE; j++) {
            piece_char = board_str[i * CHESSBOARD_SIZE + j];
            color = isupper(piece_char);
            piece = nullptr;
            switch(toupper(piece_char)) {
                case 'T': 
                    piece = new Tower(i, j, color); 
                    break;
                case 'H': 
                    piece = new Knight(i, j, color); 
                    break;
                case 'B': 
                    piece = new Bishop(i, j, color); 
                    break;
                case 'Q': 
                    piece = new Queen(i, j, color); 
                    break;
                case 'K': 
                    piece = new King(i, j, color); 
                    break;
                case 'P': 
                    piece = new Pawn(i, j, color); 
                    break;
                default: 
                    break;
            }
            if (piece) {
                list_piece_[count_piece] = piece;
                board_[i][j] = piece;
            }
        }
    }
}


/*ChessBoard::ChessBoard() : board_(), list_piece_() {
    for (size_t i = 0; i < CHESSBOARD_SIZE; i++){
        for (size_t j = 0; j < CHESSBOARD_SIZE; j++){
            board_[i][j] = nullptr;
        }
        
    }
    
    // Initialization of each peace
    list_piece_[0] = new Tower(0, 0, true);
    board_[0][0] = list_piece_[0];

    list_piece_[1] = new Tower(0, 7, true);
    board_[0][7] = list_piece_[1];

    list_piece_[2] = new Tower(7, 0, false);
    board_[7][0] = list_piece_[2];

    list_piece_[3] = new Tower(7, 7, false);
    board_[7][7] = list_piece_[3];

    list_piece_[4] = new Bishop(0, 2, true);
    board_[0][2] = list_piece_[4];

    list_piece_[5] = new Bishop(0, 5, true);
    board_[0][5] = list_piece_[5];

    list_piece_[6] = new Bishop(7, 2, false);
    board_[7][2] = list_piece_[6];

    list_piece_[7] = new Bishop(7, 5, false);
    board_[7][5] = list_piece_[7];

    list_piece_[8] = new Knight(0, 1, true);
    board_[0][1] = list_piece_[8];

    list_piece_[9] = new Knight(0, 6, true);
    board_[0][6] = list_piece_[9];

    list_piece_[10] = new Knight(7, 1, false);
    board_[7][1] = list_piece_[10];

    list_piece_[11] = new Knight(7, 6, false);
    board_[7][6] = list_piece_[11];

    list_piece_[12] = new Queen(0, 3, true);
    board_[0][3] = list_piece_[12];

    list_piece_[13] = new Queen(7, 3, false);
    board_[7][3] = list_piece_[13];

    list_piece_[14] = new King(0, 4, true);
    board_[0][4] = list_piece_[14];

    list_piece_[15] = new King(7, 4, false);
    board_[7][4] = list_piece_[15];

    
    for (size_t i = 0; i < CHESSBOARD_SIZE; i++){
        list_piece_[16+i] = new Pawn(1, i, false);
        board_[1][i] = list_piece_[16+i];
    }
    
    for (size_t i = 0; i < CHESSBOARD_SIZE; i++){
        list_piece_[24+i] = new Pawn(6, i, true);
        board_[6][i] = list_piece_[24+i];
    }
}*/

/*ChessBoard& ChessBoard::operator=(const ChessBoard& cb){
    for(int i = 0; i < CHESSBOARD_SIZE; i++) {
        for(int j = 0; j < CHESSBOARD_SIZE; j++) {
            delete board_[i][j];
        }
    }
    for(int i = 0; i < 4*CHESSBOARD_SIZE; i++) {
        delete list_piece_[i];
    }
    for(int i = 0; i < CHESSBOARD_SIZE; i++) {
        for(int j = 0; j < CHESSBOARD_SIZE; j++) {
            board_[i][j] = cb.board_[i][j]->clone();
        }
    }
    for(int i = 0; i < 4*CHESSBOARD_SIZE; i++) {
        list_piece_[i] = cb.list_piece_[i]->clone();
    }
    return *this;
}*/

void ChessBoard::print() {
    for (size_t i = 0; i < CHESSBOARD_SIZE; i++) {
        for (size_t j = 0; j < CHESSBOARD_SIZE; j++) {
            cout << " " << piece_to_char(i, j) << " ";
        }
    cout << endl;
    }
}

const char* ChessBoard::piece_to_char(int x, int y){
    if (dynamic_cast<Tower*>(board_[x][y])) {
        if(board_[x][y]->get_color()){
            return "T";
        } else {
            return "t";
        }
    } else if (dynamic_cast<Bishop*>(board_[x][y])) {
        if(board_[x][y]->get_color()){
            return"B";
        } else {
            return"b";
        }
    } else if (dynamic_cast<Knight*>(board_[x][y])) {
        if(board_[x][y]->get_color()){
            return"H";
        } else {
            return"h";
        }
    } else if (dynamic_cast<Queen*>(board_[x][y])) {
        if(board_[x][y]->get_color()){
            return"Q";
        } else {
            return"q";
        }
    } else if (dynamic_cast<King*>(board_[x][y])) {
        if(board_[x][y]->get_color()){
            return"K";
        } else {
            return"k";
        }
    } else if (dynamic_cast<Pawn*>(board_[x][y])) {
        if(board_[x][y]->get_color()){
            return"P";
        } else {
            return"p";
        }
    } else {
        return".";
    }
}

bool ChessBoard::is_free(int x, int y){
    if(board_[x][y] == nullptr){
        return true;
    }
    return false;
}
