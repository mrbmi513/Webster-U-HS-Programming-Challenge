#include <iostream>
#include <fstream>

using namespace std;

ifstream fin;
int main(){
    fin.open("EvenNumbers.dat");
    int numTimes;
    fin >> numTimes;
    for(int i = 0; i < numTimes; i++){
        int min, max;
        fin >> min >> max;
        for(int j = min; j <= max; j++){
            if(j % 2 == 0){
                cout << j << "\t";
            }
        }
        cout << endl;
    }

    fin.close();
    return 0;
}
