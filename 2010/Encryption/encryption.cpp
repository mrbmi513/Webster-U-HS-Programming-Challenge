#include <fstream>
#include <iostream>
#include <string>

using namespace std;

char encrypt(char);
string encryptWord(string);

int main(){
	ifstream fin;
	fin.open("Encryption.dat");

	int numlines;
	fin >> numlines;
	fin.ignore(80, '\n');

	for(int i = 0; i < numlines; i++){
		string temp;
		getline(fin, temp);
		cout << encryptWord(temp) << endl;
	}

	fin.close();
	return 0;

}

char encrypt(char ltr){
	switch(ltr){
	case 'A':
		return 'E';
		break;
	case 'E':
		return 'I';
		break;
	case 'I':
		return 'O';
		break;
	case 'O':
		return 'U';
		break;
	case 'U':
		return 'A';
		break;
	default:
		return ltr;
	}

}

string encryptWord(string wd){
	string rtn = "";
	for(int i = 0; i < wd.length(); i++){
		rtn += encrypt(wd[i]);
	}
	return rtn;
}
