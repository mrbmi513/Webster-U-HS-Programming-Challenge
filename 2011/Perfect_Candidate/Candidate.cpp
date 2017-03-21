#include <iostream>
#include <fstream>

using namespace std;

ifstream fin;

int main(){
  fin.open("Candidate.dat");

  int numCommit;
  fin >> numCommit;
  fin.ignore(80, '\n');

  for(int m = 0; m < numCommit; m++){
    int votes[4] = { 0 }; //count the number of votes
    int ipt;
    for(int i = 0; i < 16; i++){
      fin >> ipt;
      votes[i%4] += ipt; //will add to 0, 1, 2, 3, 0, 1, ...
    }

    //Check for perfect Candidate
    bool found = false;
    for(int i = 0; i < 4; i++){
      if(votes[i] == 4){ cout << i+1 << endl; found = true;}
    }
    if(!found){cout << "none" << endl;} //If no perfect candidate, indicate so.
  }
  fin.close();
  return 0;
}
