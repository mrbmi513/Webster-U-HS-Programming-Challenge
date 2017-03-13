#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
using namespace std;

ifstream fin;

bool isEOF();
void tableMe();

int main(){
	fin.open("ipt.txt");
	cout << setprecision(2) << fixed << showpoint;
	while(!isEOF())
		tableMe();

	return 0;
}

bool isEOF(){
	return fin.peek() == '0' || fin.eof();
}
void tableMe(){
	int r, c;
	fin >> r >> c;
	fin.ignore(90, '\n');

	for(int i = 1; i <= r; i++){
		for(int j = 1; j <= c; j++){
			double ans = pow(i, 1.0/j);
			cout << ans << " ";
		}
		cout << endl;
	}
	cout << endl;

}
