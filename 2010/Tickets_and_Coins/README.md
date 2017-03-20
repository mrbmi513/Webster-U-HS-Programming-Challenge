# Tickets and Coins
Suppose you have a bag of coins and want to use them to purchase a movie ticket. The possible values of coins are: 1 cent, 10 cents, 25 cents, and 1 dollar (100 cents), and you want to use as few coins as possible for each ticket.

For example, if a movie ticket costs 3 dollars and 30 cents (330 cents), you need to use 3 one dollar coins, and 3 10 cents coins. For this problem the output will be: 3:100 3:10

The first line of the input file contains an integer indicating the number of subsequent lines of data. Each line of data contains 1integer, representing the ticket price.

For each input line the program should output the number and value of each type of coin needed. The format of an output line should be:
`<n>:<v> <n>:<v> …`
where ‘n’ is the number of coins, and ‘v’ is the value of a coin. Each type of coin can only appear once in an output line. Higher value coined should appear before lower value coins in the output line.

Data file: `Tickets.dat`     Save program on: `Tickets.cpp(.java)``

## Sample Run
Input:
```
3
422
380
999
```
Output:
```
4:100 2:10 2:1
3:100 3:25 5:1
9:100 9:10 9:1
```
