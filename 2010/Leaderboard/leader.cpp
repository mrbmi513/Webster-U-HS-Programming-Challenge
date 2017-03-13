#include <fstream>
#include <iostream>
#include <string>

using namespace std;

struct Person{
	string name;
	int strength;
	int intellect;
	int endurance;
};

void fillPlayers(Person[20], int);
void leadStren(Person[20]);
void leadIntel(Person[20]);
void leadEndur(Person[20]);
void printPlr(Person[20]);

ifstream fin;


int main(){
	Person null;
	null.name = "NULL";
	Person players[20];
	fill(players, players+20, null);
	fin.open("Leader.dat");
	int num;
	fin >> num;
	fin.ignore(80, '\n');

	fillPlayers(players, num);
	//printPlr(players);
	leadStren(players);
	leadIntel(players);
	leadEndur(players);
	return 0;
}

void fillPlayers(Person p[20], int num){
	for(int i = 0; i < num; i++){
		Person plr;
		fin >> plr.name >> plr.strength >> plr.intellect >> plr.endurance;
		fin.ignore(80, '\n');
		p[i] = plr;
	}
}

void leadIntel(Person p[20]){
	int first = 0;
	int second = 1;
	int third = 2;
	for(int i = 1; i < 20; i++){
		if(p[i].name != "NULL"){
			if(p[i].intellect > p[first].intellect){
				third = second;
				second = first;
				first = i;
			}
			else if(p[i].intellect > p[second].intellect){
				third = second;
				second = i;
			}
			else if(p[i].intellect > p[third].intellect){
				third = i;
			}
		}
	}
	cout << "Intellect" << endl << p[first].name << " " << p[first].intellect << endl;
	cout << p[second].name << " " << p[second].intellect << endl;
	cout << p[third].name << " " << p[third].intellect << endl;
}
void leadEndur(Person p[20]){
	int first = 0;
	int second = 1;
	int third = 2;
	for(int i = 1; i < 20; i++){
		if(p[i].name != "NULL"){
			if(p[i].endurance > p[first].endurance){
				third = second;
				second = first;
				first = i;
			}
			else if(p[i].endurance > p[second].endurance){
				third = second;
				second = i;
			}
			else if(p[i].endurance > p[third].endurance){
				third = i;
			}
		}
	}
	cout << "Endurance" << endl << p[first].name << " " << p[first].endurance << endl;
	cout << p[second].name << " " << p[second].endurance << endl;
	cout << p[third].name << " " << p[third].endurance << endl;
}
void leadStren(Person p[20]){
	int first = 0;
	int second = 1;
	int third = 2;
	for(int i = 1; i < 20; i++){
		if(p[i].name != "NULL"){
			if(p[i].strength > p[first].strength){
				third = second;
				second = first;
				first = i;
			}
			else if(p[i].strength > p[second].strength){
				third = second;
				second = i;
			}
			else if(p[i].strength > p[third].strength){
				third = i;
			}
		}
	}
	cout << "Strength" << endl << p[first].name << " " << p[first].strength << endl;
	cout << p[second].name << " " << p[second].strength << endl;
	cout << p[third].name << " " << p[third].strength << endl;
}
void printPlr(Person p[20]){
	for(int i = 0; i < 20; i++){
		if(p[i].name != "NULL"){
			cout << p[i].name << endl;
		}
	}
}
