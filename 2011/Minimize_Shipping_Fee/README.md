# Minimize Shipping Fee
The shipping fees charged by a shipping company are $1 for each pound. However, if you ship a package weighing exactly 100 pounds you get a cheaper flat rate of $50. For example:

  Weight: 56, 65, 10, 90, 5
  You will need to pay: $176

(since 10+90 = 100, gives you a cheaper flat rate of $50, and 56+65+5 = 126 pounds will cost $1 per pound) .

You are given a group of items with known weight; your job is to minimize the shipping fee.

The first line of the input file contains an integer indicating the number of subsequent lines of data. Each line of data contains 5 integers, separated by spaces, representing shipping item’s weights. For each line of data, the program should output a single value representing the final shipping price.

Data file: `Shipping.dat`     Save program on: `Shipping.cpp(.java)`

## Sample Run
Input:
```
3
25 20 89 11 32
15 92 7 8 60
73 42 51 10 33
```
Output:
```
370
```
