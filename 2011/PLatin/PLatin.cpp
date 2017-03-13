#include <fstream>
#include <iostream>
#include <string>

using namespace std;

bool isEOL(char);

int main(){
	ifstream fin;
	fin.open("PLatin.dat");
	while(!fin.eof()){
		string word;
		fin >> word;
		bool start = false;
		if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'u' || word[0] == 'o')
			start = true;
		while(word[0] != 'a' && word[0] != 'e' && word[0] != 'i' && word[0] != 'u' && word[0] != 'o'){
			word = word.substr(1) + word[0];
		}
		if(start)
			word = 'p' + word;
		word += "ay";
		cout << word << " ";
	}
	cout << "\b" << endl;
	fin.close();


}
