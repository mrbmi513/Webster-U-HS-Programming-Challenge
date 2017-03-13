#include <iostream>
#include <fstream>

using namespace std;

ifstream fin;


int main(){
	fin.open("PerfectNumber.dat");
	int num, sum=0;
	fin >> num;

	for(int i = 1; i < 28; i++){
		if(num%i == 0)
			sum += i;
	}
	if(sum == num)
		cout << num << " is a perfect number" << endl;
	else
		cout << num << " is not a perfect number" << endl;
	return 0;
}
