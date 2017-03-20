# Simple Sudoku
Sudoku is a game played on a 9x9 grid. The solution is a grid such that every row and column has exactly one instance of the integers 1 to 9. Further, each 3x3 sub-grid also has exactly one instance of the numbers 1 to 9. You are required to write a program to validate one row of a Sudoku grid.

The first line of the input file contains an integer n, less than or equal to 20, representing the number of subsequent lines of data. The subsequent n lines of data each contains 9 integer values separated by spaces. The line may contain duplicate integers, which is not valid for Sudoku. For each of the n input lines the program should output “Valid” or “Invalid”. If the line contains integers 1 to 9 then the word “Valid” should be displayed, otherwise it should output “Invalid”.

Data file: `Sudoku.dat`     Save program on: `Sudoku.cpp(.java)`

## Sample Run
Input:
```
5
1 2 3 6 5 4 6 8 7
1 2 3 5 5 4 2 8 7
9 8 7 1 2 3 6 4 5
1 2 4 4 3 5 6 9 7
9 8 1 3 2 7 5 9 4
```
Output:
```
Invalid
Invalid
Valid
Invalid
Invalid
```
