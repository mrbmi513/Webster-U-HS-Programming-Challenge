# TicTacToe
In the game of TicTacToe two players, X and O, alternately place their marks on a
3x3 square board. The first to succeed in placing three of their marks in a row
(vertically, horizontally, or diagonally) is deemed the winner. It is possible for the
game to end with no winner. In this problem you will examine a TicTacToe board
to determine if there is a winner.

The first line of the input file contains an integer n, less than or equal to 20,
representing the number of TicTacToe games that follow in the input file. Each
subsequent line contains one row of a TicTacToe game; three rows comprise one
game. Each row contains three characters, with no spaces. Each character is ‘X’,
‘O’, or ‘-‘ indicating that the square is empty.

There should be one line of output for each TicTacToe game input. Each line of
output should contain a single character. If ‘X’ or ‘O’ is deemed the winner then
the appropriate character should be displayed. If there is no winner then ‘-‘ should
be displayed.

Data file: `TicTacToe.dat`     Save program on: `TicTacToe.cpp(.java)`

## Sample Run
Input:
```
3
XOX
XOX
OXO
XOX
OXX
OXX
OOX
XXO
OOO
```

Output:
```
-
X
O
```
