# Pigeon Hole Problem
A group of pigeons want to fly to their holes; each hole can only hold one pigeon.
Every pigeon has a unique identification number, and every hole has a unique
number. The pigeon can only fly to the hole displaying their identification number.
Not every hole needs to be filled.

Your job is to determine whether or not all the pigeons can have a hole to which
they can fly. You can assume the identification number for pigeons and holes are
between 1 and 100. Your program needs to output “Fit” or “Not fit”. In the
following example, the first row of data represents identification numbers for
pigeons, and the second row represents identification numbers for holes
```
67 98 92 94 93
67 97 3 5 100 94 89 93 98 61
```
The output would be “Not fit” since 92 is missing.

The first line of the input file contains an integer, less than or equal to 20,
representing the number of subsequent pairs of lines of data. Each line of data
contains a sequence of numbers, separated by spaces. The first line of each pair
contains 5 pigeon numbers, while the second contains 10 hole numbers. For each
pair of lines of data the program must output either “Fit” or “Not fit”.

Data file: `PigeonHole.dat`     Save program on: `PigeonHole.cpp(.java)`

## Sample Run
Input:
```
2
95 92 94 5 8
94 92 95 20 34 75 23 9 5 12
67 98 92 94 93
67 97 3 5 100 94 89 93 98 92
```

Output:
```
Not Fit
Fit
```
