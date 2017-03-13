#include <fstream>
#include <iostream>

using namespace std;

void calcLine();
ifstream fin;

int main(){
	fin.open("shipping.dat");
	int num;
	fin >> num;
	fin.ignore(80, '\n');
	for(int i = 0; i < num; i++){
		calcLine();
	}
	return 0;
}

void calcLine(){
	int sum = 0;
	while(fin.peek() != '\n' && !fin.eof()){
		int temp;
		fin >> temp;
		sum += temp;
	}
	fin.ignore(80, '\n');
	int numHund = sum/100;
	int extra = sum%100;

	cout << (numHund*50) + extra << endl;
}
