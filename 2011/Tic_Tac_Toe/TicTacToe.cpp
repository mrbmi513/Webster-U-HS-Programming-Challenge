//Competition will ignore all output to cerr
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin;

char checkBoard(char[3][3]);

int main(){
  fin.open("TicTacToe.dat"); //Open the file

  int numBoards;
  fin >> numBoards; //Get how many boards to check
  fin.ignore(80, '\n');

  for(int i = 0; i < numBoards; i++){ //Work each board
    char board[3][3]; //Representation of the board
    for(int r = 0; r < 3; r++){ //Fill the board
      for(int c = 0; c < 3; c++){
        fin >> board[r][c];
        //cerr << board[r][c];
      }
      //cerr << endl;
    }
    cout << checkBoard(board) << endl;
  }
  fin.close();
  return 0;
}

/*
    Checks the TicTacToe board for wins
*/
char checkBoard(char board[3][3]){
  //Check the rows
  for(int r = 0; r < 3; r++){
    //cerr<<"Row " << r << "\t" << board[r][0] << board[r][1] << board[r][2] << endl;
    if(board[r][0] == board[r][1] && board[r][0] == board[r][2]) return board[r][0];
  }
  //Check the cols
  for(int c = 0; c < 3; c++){
    //cerr<<"Col " << c << "\t" << board[0][c] << board[1][c] << board[2][c] << endl;
    if(board[0][c] == board[1][c] && board[0][c]== board [2][c]) return board[0][c];
  }
  //check the diags
  if(board[0][0] == board[1][1] && board[0][0] == board[2][2]) return board[0][0];
  if(board[2][0] == board[1][1] && board[2][0] == board[0][2]) return board[2][0];
  //If there's no matches, return the dash
  return '-';
}
