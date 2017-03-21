#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fin;

struct Player{
  string name;
  double speed;
  int weight;
  int strength;
};

int main(){
  fin.open("Players.dat");

  //Initialize the Guidelines
  Player wr; wr.name = "Wide Receiver"; wr.speed = 4.5; wr.weight = 150; wr.strength = 200;
  Player ln; ln.name = "Lineman"; ln.speed = 6.0; ln.weight = 300; ln.strength = 500;
  Player qb; qb.name = "Quarterback"; qb.speed = 5.0; qb.weight = 200; qb.strength = 300;
  Player pos[3] = {wr, ln, qb};

  int numPlr;
  fin >> numPlr;

  for(int i = 0; i < numPlr; i++){
    string name;
    fin >> name;

    double speed;
    fin >> speed;

    int weight;
    fin >> weight;

    int strength;
    fin >> strength;

    fin.ignore(80, '\n');

    cout << name << "\t";
    //Check for Compaitibility
    bool compat = false;
    for(int i = 0; i < 3; i++){
      if(speed <= pos[i].speed && weight >= pos[i].weight && strength >= pos[i].strength){
          cout << pos[i].name << "\t";
          compat = true;
      }
    }
    if(!compat) cout << "No positions";
    cout << endl;
  }

  return 0;
}
