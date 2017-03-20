# Subsets
A “set” is a collection of unique values. If set A is a “subset” of B, then all values of A are in B. Given a list of named sets, you must write a program to output which sets are a subset of another set. The first line of the input file contains an integer, n, representing the number of sets. You can assume that n is no greater than 20. The next n lines contain information about each set, one per line. For each line, the name of the set is followed by the values in the set, separated by spaces. You can assume that each value is an integer between 1 and 9, and that there are no more than 10 values in each set.

For each set you should determine those sets for which it is a subset, and for each one display a line in the following format:
 `<set name> is a subset of <set name>`

If a set is not a subset of any other set then the message:
`<set name> is not a subset of any other set`
should be displayed.

The order in which subsets are displayed should be same as the order in which they were read.

Data file: `Subsets.dat`      Save program on: `Subsets.cpp(.java)`

## Sample Run
Input:
```
7
Biff 1 2 3 4
Bam 1 5 6 2 3
Pow 5
Kaboom 7 8 9
Slam 3 2 4 5 1 6 9 7 8
Crack 2 1 3
Bang 5
```
Output:
```
Biff is a subset of Slam
Bam is a subset of Slam
Pow is a subset of Bam
Pow is a subset of Slam
Pow is subset of Bang
Kaboom is a subset of Slam
Crack is a subset of Biff
Crack is a subset of Bam
Crack is a subset of Slam
Bang is a subset of Bam
Bang is a subset of Pow
Bang is a subset of Slam
```
