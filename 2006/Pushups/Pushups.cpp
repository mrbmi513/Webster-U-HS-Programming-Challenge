#include <iostream>
#include <fstream>

using namespace std;

ifstream fin;

int main(){
    fin.open("Pushups.dat");
    int numTimes;
    fin >> numTimes;

    for(int i = 0; i < numTimes; i++){
        int points;
        fin >> points;
        int numTouch = points/7;
        int sum;
        for(int j = 1; j <= numTouch; j++){
            sum += 7*j;
        }
        cout << sum << endl;
    }


    fin.close();
    return 0;
}
