#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
1. Get # of menus and loop (1-20)
-- 2. Get # of options (1-20)
-- 3. Calc best cost/city/mile
-- 4. Print
*/

bool is_eof();
double get_cpcpm(int, double, double);
void solve_menu(int);

ifstream fin;
int main(){
	fin.open("ipt.txt");

	int menu;
	fin >> menu;
	fin.ignore(80, '\n');

	for(int i = 1; i <= menu; i++){
		if(!is_eof())
			solve_menu(i);
	}

	fin.close();
	return 0;
}
bool is_eof(){
	return (fin.peek() == '0');
}
void solve_menu(int no){
	int optn, best;
	double best_val = INT_MAX;
	fin >> optn;
	fin.ignore(80, '\n');

	for(int i = 0; i < optn; i++){
		int c;
		double d, p, result;
		fin >> c >> d >> p;
		result = get_cpcpm(c,d,p);
		if(result < best_val){
			best = c;
			best_val = result;
		}
	}
	cout << "Plan " << no << ": " << best << endl;
}
double get_cpcpm(int c, double d, double p){
	return (p*1000)/(d*1000)/c;
}
