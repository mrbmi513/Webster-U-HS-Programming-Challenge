#include <iostream>
#include <fstream>

using namespace std;

ifstream fin;

int main(){
  fin.open("Magic.dat");
  int mSq[3][3]; //Magic Square
  int sum[8]; //Sums

  //Fill Array
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      int temp;
      fin >> temp;
      mSq[i][j] = temp;
    }
  }

  //Sum Rows
  for(int i = 0; i < 3; i++){
    sum[i] = mSq[i][0] + mSq[i][1] + mSq[i][2];
  }

  //Sum Cols
  for(int j = 0; j < 3; j++){
    sum[j+3] = mSq[0][j] + mSq[1][j] + mSq[2][j];
  }

  //Sum Diags
  sum[6] = mSq[0][0] + mSq[1][1] + mSq[2][2];
  sum[7] = mSq[2][0] + mSq[1][1] + mSq[0][2];

  //Check for equality
  for(int i = 0; i < 8; i++){
      if(sum[i] != sum[0]){
        cout << "Not a Magic Square" << endl;
        return 0;
      }
    }

  // If it makes it through the loop, then all values must equal the first value, and thus each other.
  cout << "Magic Square" << endl;

  return 0;
}
