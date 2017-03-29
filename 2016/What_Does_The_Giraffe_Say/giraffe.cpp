#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
ifstream fin;

int main(){
  fin.open("giraffe.in");
  vector<string> sounds;
  string ipt;

  //Get all the sounds
  int numSnds;
  fin >> numSnds;
  for(int i = 0; i < numSnds; i++){
    fin >> ipt >> ipt >> ipt;
    sounds.push_back(ipt);
    //cerr << ipt << endl;
  }

  //Make sure we start the next part on a new line
  fin.ignore(80, '\n');

  //Find what the Giraffe says!
  while(!fin.eof()){
    getline(fin, ipt);
    ipt = " " + ipt;
    //cerr << ipt << endl;
    for(int i = 0; i < sounds.size(); i++){
      int pos = ipt.find(" "+sounds[i]+" ");
      while(pos != -1){
        ipt.replace(pos+1, sounds[i].length()+1, "");
        pos = ipt.find(" "+sounds[i]+" ");
      }
    }
    ipt = ipt.substr(1);
    cout << ipt << endl;
    getline(fin, ipt);
  }


  fin.close();
  return 0;
}
