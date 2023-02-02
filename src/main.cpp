#include "../include/main.hpp"

using namespace std;

int main() {
    ChessBoard game;
    game.print();
    cout << game.found_piece(0, 0) << endl;
    return 0;
}