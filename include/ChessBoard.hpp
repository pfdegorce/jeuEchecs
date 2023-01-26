#include "main.hpp"

class ChessBoard
{
private:
    /* data */
public:
    ChessBoard() = default;
    ~ChessBoard() = default;

    void print();
    bool check_play(int x1, int y1, int x2, int y2);
    void play(int x1, int y1, int x2, int y2);
};

