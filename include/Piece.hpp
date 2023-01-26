#include "main.hpp"

class Piece
{
private:
    bool color_; //white = false, black = true
    size_t x_; //pos x
    size_t y_; //pos y
public:
    Piece() = default;
    ~Piece() = default;
    Piece(int x, int y, bool c);
    virtual bool valid_move(int x, int y) = 0;
    void move(int x, int y);
};
