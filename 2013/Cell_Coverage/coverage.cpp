#include <iostream>
#include <fstream>

using namespace std;

ifstream fin;

bool isEOF();
bool isInCoverage(int, int, int);
void solveCoverage();

int main(){
	fin.open("coverage.in");
	int numData;
	fin >> numData;
	fin.ignore(80, '\n');
	for(int i = 0; i < numData; i++){
		if(!isEOF())
			solveCoverage();
	}
	fin.close();
	return 0;
}
bool isEOF(){
	return fin.peek() == '0';
}
bool isInCoverage(int x, int y, int r){
	//Distance Formula
	// sqrt ((x2-x2)^2 + (y2-y1)^2)
	int dist = sqrt(pow(x,2.0) + pow(y,2.0)) + .5;
	return abs(dist) < r;

}
void solveCoverage(){
	int r, c, count=0;
	fin >> r >> c;
	fin.ignore(80, '\n');

	for(int i = 0; i < c; i++){
		int x, y;
		fin >> x >> y;
		fin.ignore(80, '\n');

		bool inside = isInCoverage(x, y, r);
		if(inside)
			count++;
	}
	cout << count << endl;
}
