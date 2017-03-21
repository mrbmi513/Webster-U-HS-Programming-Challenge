#include <iostream>
#include <fstream>

using namespace std;

ifstream fin;

void selection(int[5]);
void findOut();

int main(){
    fin.open("Skewed.dat");

    int times;
    fin >> times;

    for(int i = 0; i < times; i++){
        findOut();
    }

    fin.close();
    return 0;
}
void selection(int a[5]){
       for(int n = 0; n < 5; n++){
           int min = n;
           for(int i = n; i < 5; i++){
               if(a[i] < a[min])
                   min = i;
           }
           int temp = a[n];
           a[n] = a[min];
           a[min] = temp;
       }
   }
void findOut() {
    int data[5];
    for(int i = 0; i < 5; i++){
        fin >> data[i];
    }
    int minimum = data[0], minI = 0, maximum = data[0], maxI = 0, median;

    //find minimum
    for(int i = 1; i < 5; i++){
        if(data[i] < minimum){
            minimum = data[i];
            minI = i;
        }
    }
    //find maximum
    for(int i = 1; i < 5; i++){
        if(data[i] > maximum){
            maximum = data[i];
            maxI = i;
        }
    }
    //sort a copy of the array for the median
	int copy[5];
	for (int i = 0; i < 5; i++) {
		cout << data[i] << " ";
		copy[i] = data[i];
	}
    selection(copy);
    median = copy[3];
	cout << "Median " << median << " ";
	//Find Skew
	if (abs(3 - minI) > abs(3 - maxI)) cout << "Left-skewed" << endl;
	else if (abs(3 - minI) < abs(3 - maxI)) cout << "Right-skewed" << endl;
	else cout << "Symmetric" << endl;
}
