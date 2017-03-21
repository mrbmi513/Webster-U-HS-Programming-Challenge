#include <iostream>
#include <fstream>


using namespace std;

ifstream fin;

void willItFit();
int main(){
    fin.open("PigeonHole.dat");
    int times;
    fin >> times;
    for (int i = 0; i < times; i++){
        willItFit();
    }

    return 0;
}
void willItFit(){
    int pigeons[5];
    int holes[10];

    //Get pigeon and hole numbers
    for(int i = 0; i < 5; i++){
        fin >> pigeons[i];
    }
    for(int i = 0; i < 10; i++){
        fin >> holes[i];
    }

    //Do some searching
    bool fits;
    for(int i = 0; i < 5; i++){
        fits = false;
        for(int j = 0; j < 10; j++){
            //If we find a matching hole, nark it and move on
            if(pigeons[i] == holes[j]){
                fits = true;
                break;
            }
        }
        //If we didn't find a matching hole, leave! We already know the pigeons don't fit.
        if(!fits){
            cout << "Not Fit" << endl;
            return;
        }
    }
    //If we get here, that means all the pigeons fit!
    //If a pigeon didn't fit, the function would end there in the for loop.
        cout << "Fit" << endl;

}
