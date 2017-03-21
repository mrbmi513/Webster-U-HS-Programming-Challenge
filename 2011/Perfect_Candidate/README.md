# Perfect Candidate
Suppose that a committee of 4 people, labeled 1 to 4, is trying to decide on a
chairperson. The chairperson will be chosen from the members of the committee.
Each person has a subset of other committee members who they support for this
position. We can represent their preferences with a table of 0’s and 1’s. A 1 in
row i column j indicates that person i supports person j for chairperson, and a 0
indicates that person i does not support person j for chairperson. Each person
wants to be chairperson, so for each i there is a 1 in row i column i.

Before holding the election the committee decides to compare their preferences
and see if there is an individual who supports only himself or herself for
chairperson, and who everyone else also supports. Such a member is called a
“perfect candidate”. A perfect candidate may not exist, but it is easy to see that
there cannot be more than one.

The first line of the input file contains an integer n, less than or equal to 20,
representing the number of committees to be considered. There follow 4 lines of
data for each of these n committees. Each of the 4 lines of data for a committee
contain four 0’s or 1’s, separated by spaces.

For each committee your program should output the index of the perfect candidate,
if one exists, and “none” is there is no perfect candidate.

Data file: `Candidate.dat`     Save program on: `Candidate.cpp(.java)`

## Sample Run
Input:
```
3
1 0 0 1
0 1 0 0
0 1 1 1
1 1 1 1
1 0 1 0
0 1 0 0
0 0 1 1
1 0 0 1
1 0 1 0
0 1 1 0
0 0 1 1
1 0 1 1
```
Output:
```
none
none
3
```
