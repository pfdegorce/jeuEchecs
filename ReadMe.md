# Chess game

## Use
To start game : 
```
make
./Chess.exe
```
How to play:
    - Enter the name of the white player.
    - Enter the name of the black player.
    For each player:
    - The white player begins
    - It is asked to enter coordinates for the start position. It corresponds to where the piece you want to move is (ex: E2). 
        Then it is asked to enter coordinates for the end position. It correspond to where you want to move your piece (ex: E4).
    - To make castling, please put the coordinates of the king and the tower (ex: Start position: E1; End position: H1).

Information :
    - The function "in_check" doesn't work (segmentation fault problem insolved the 05/02 at 5pm)
     -> So no checkmate, so no end of the game !
    - No pawn promotion
    - No "en passant"
    - Do a "make" before playing otherwise Chess.exe keep the precedent game.