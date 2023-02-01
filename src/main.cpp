#include "../include/main.hpp"

using namespace std;

int main() {
    cout << "Hello World" << endl;
    fflush(stdout);
    ChessBoard game;
    cout << "Game init" << endl;
    fflush(stdout);
    game.print();
    return 0;
}