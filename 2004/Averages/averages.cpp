#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

double average(int[20], int);
double above(int[20], int, double);


ifstream fin;

int main(){
	fin.open("StudentAverages.dat");
	int num;
	fin >> num;
	fin.ignore(80, '\n');
	for(int i = 0; i < num; i++){
		int ipt[20] = {-1};
		int stud;
		fin >> stud;
		int j = 0;
		for(int j = 0; j < stud; j++)
			fin >> ipt[j];
		double pct = above(ipt, stud, average(ipt, stud));
		if(pct - (int)pct == 0)
			cout << setprecision(0);
		else
			cout << setprecision(5);
		cout << pct << "%" << endl;
	}

	return 0;
}

double average(int a[20], int num){
	double sum = 0;
	for(int i = 0; i < num; i++)
		sum += a[i];
	return sum / num;
}

double above(int a[20], int num, double avg){
	double count = 0;
	for(int i = 0; i < num; i++){
		if(a[i] > avg)
			count++;
	}
	return (count/num) * 100;
}