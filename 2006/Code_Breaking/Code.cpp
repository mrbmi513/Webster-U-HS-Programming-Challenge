#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool validWord(string, string);

ifstream fin;

int main(){
    fin.open("Code.in");
    string code;
    fin >> code;

    int numTimes;
    fin >> numTimes;

    for(int i = 0; i < numTimes; i++){
        string word;
        fin >> word;
        if(validWord(code, word)){
            cout << word << endl;
        }
    }
    fin.close();
    return 0;
}
bool validWord(string code, string word){
    int lastIdx = 0;
    for(int i = 0; i < word.length(); i++){
        int idx = code.find(word[i], lastIdx);
        if(idx == -1){
			return false;}
        lastIdx = idx;
    }
    return true;
}
