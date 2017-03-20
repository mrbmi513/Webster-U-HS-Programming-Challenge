# Leaderboard
Characteristics of the players in a roll-playing game are recorded. These characteristics are: Strength, Intellect, and Endurance. You are to write a program to read characteristics of players and, for each characteristic, display the top three players in order from highest to lowest. The first line of the input file contains an integer, n, representing the number of players in the file. It can be assumed that n is between 3 and 20. The next n lines contain the names and characteristics of each of the players, one player per line. Each line consists of the username, followed by their strength, intellect, and endurance attributes separated by spaces. Each attribute is an integer value between 1 and 100. The program should output the names of the characteristics, in order of Strength, Intellect, and Endurance. The leading three players, along with their attribute value, should follow each characteristic and be ordered highest to lowest. It can be assumed that no two attribute values, for a particular characteristic, are the same.

Data file: `Leader.dat`   Save program on: `Leader.cpp(.java)`

## Sample Run
Input:
```
6
Tim 10 20 30
Ted 15 19 7
Tommy 9 45 18
Tammy 18 25 20
Taz 10 10 5
Tod 22 11 3
```

Output:
```
Strength
Tod 22
Tammy 18
Ted 15
Intellect
Tommy 45
Tammy 25
Tim 20
Endurance
Tim 30
Tammy 20
Tommy 18
```
