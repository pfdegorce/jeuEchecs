#include "../include/main.hpp"

using namespace std;

int main() {
    ChessBoard game;
    game.print();
    cout << game.found_piece(0, 0) << endl;
    game.play(1, 1, 2, 1);
    game.print();
    return 0;
}