#include <fstream>
#include <iostream>

using namespace std;

int main(){
	ifstream fin;
	fin.open("Tickets.dat");
	int numlines;
	fin >> numlines;
	for(int i = 0; i < numlines; i++){
		int price;
		fin >> price;

		int hundred = price/100;
		price %= 100;

		int twentyfive = price/25;
		price %= 25;

		int ten = price/10;
		price %= 10;

		//price is leftover ones

		if(hundred > 0)
			cout << hundred << ":100 ";
		if(twentyfive>0)
			cout << twentyfive << ":25 ";
		if(ten>0)
			cout << ten << ":10 ";
		if(price>0)
			cout << price << ":1 ";

		cout << "\b\n";
	}
	fin.close();
	return 0;

}
