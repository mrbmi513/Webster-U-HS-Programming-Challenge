#include <iostream>
#include <fstream>
using namespace std;

ifstream fin;

bool isEOF();
void solvePhone();


int main(){
	fin.open("ipt.txt");
	while(!isEOF())
		solvePhone();
	fin.close();
}

bool isEOF(){
	return fin.peek() == '0' || fin.eof();
}
void solvePhone(){
	int power = 1000;
	int inst;
	fin >> inst;
	fin.ignore(1, '\n');
	for(int i = 0; i < inst; i++){
		char change;
		fin.get(change);
		switch(change){
			case '+':
				power++;
				break;
			case '-':
				power--;
				break;
			default:
				break;
		}
	}
	fin.ignore(80, '\n');
	cout << power << endl;
}
