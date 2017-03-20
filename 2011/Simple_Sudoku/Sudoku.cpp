#include <fstream>
#include <iostream>

using namespace std;

int main(){

	ifstream fin;
	fin.open("Sudoku.dat");
	int numLines;
	fin >> numLines;
	//cout << "NUM: " << numLines << endl << endl;
	for(int i = 0; i < numLines; i++){
		//cout << "Entered Loop " << i <<endl;
		int row[9];
		bool found[9] = {false, false, false, false, false, false, false, false, false};
		//cout << "Array " << i << " initialized." << endl;
		bool valid = true;
		for(int j = 0; j < 9; j++){
			char temp;
			fin.get(temp);
			row[j] = temp - '0';
		}
		fin.ignore(80, '\n');
		//cout << "Array " << i << " filled." << endl;
		for (int k = 0; k < 9; k++){
			//cout << "Iteration " << k << " row[k]-1="<<row[k]-1<<endl;
			if(found[row[k]-1]){
				cout << "Invalid" << endl;
				valid = false;
				break;
			}
			else{
				found[row[k]-1] = true;
			}
			//cout << "Array " << i << " iteration " << k << " finished." << endl;
		}
		if(valid)
			cout << "Valid" << endl;
	}
	return 0;
}
