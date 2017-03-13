#include <iostream>
#include <fstream>

void shift_left(int[10], int);

using namespace std;

ifstream fin;

int main(){
  fin.open("Transform.dat");
  int arr[10];

  //Fill array
  for(int i = 0; i < 10 && !fin.eof(); i++){
    int temp;
    fin >> temp;
    arr[i] = temp;
  }

  //Shift Zeroes to the end
  for(int i = 0; i < 10; i++){
    if(arr[i] == 0)
      shift_left(arr, i);
  }

  //Print array
  for(int i = 0; i < 10; i++)
    cout << arr[i] << " ";
  cout << endl;

  return 0;
}

void shift_left(int arr[10], int idx){
  for(int i = idx; i < 10; i++){
    arr[i] = arr[i+1];
  }
  arr[9] = 0;
}
