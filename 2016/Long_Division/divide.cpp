#include <iostream>
#include <fstream>

using namespace std;

ifstream fin;

int main(){
  fin.open("divide.in");
  int dd, dv, quot, remain;

  fin >> dd >> dv;

  quot = dd / dv;
  remain = dd % dv;

  cout << dd << " / " << dv << " = " << quot << " R " << remain << endl;

  fin.close();
  return 0;
}
