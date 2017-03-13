#include <fstream>
#include <iostream>
#include <string>
using namespace std;

struct Set{
	string name;
	string vals;
};

Set initSet();

ifstream fin;
int main(){
	fin.open("Subsets.dat");
	Set sets[20];
	//fill array with "null" sets
	for(int i = 0; i < 20; i++)
		sets[i] = initSet();

	//get num sets
	int numSets;
	fin >> numSets;
	fin.ignore(80, '\n');

	//fill sets with data
	for(int i = 0; i < numSets; i++){
		fin >> sets[i].name;
		string ipt;
		while(fin.peek() != '\n' && !fin.eof()){
			fin >> ipt;
			sets[i].vals += ipt;
		}
	}

	//Check subsets
	//Go through each set
	for(int i = 0; i < numSets; i++){
		bool match = false;
		//Check every other set against it
		for(int j = 0; j < numSets; j++){
			//If the same set, skip
			if(i==j) continue;

			//Go through each char in [i].vals and see if it is in [j].vals
			bool isSub = true;
			for(int k = 0; k < sets[i].vals.length() && isSub; k++){
				if(sets[j].vals.find(sets[i].vals[k]) == -1)
					isSub = false;
			}
			if(isSub){
				cout << sets[i].name << " is a subset of " << sets[j].name << "." << endl;
				match = true;
			}

		}
		if(!match){
			cout << sets[i].name << " is not a subset of any other set." << endl;
		}

	}
	fin.close();
	return 0;
}

Set initSet(){
	Set s;
	s.name = "NULL";
	s.vals = "";
	return s;
}
