# Sphenic Numbers
Source file: `sphenic.{c, cpp, java}`  
Input file: `sphenic.in`

In number theory, a _sphenic_ number (from Ancient Greek for 'wedge') is a positive integer that is the product of _exactly_ three distinct prime numbers, p, q, and r.  

The first five sphenic numbers are: 30, 42, 66, 70, and 78  
30 = 2 x 3 x 5 (where p=2, q=3, and r=5)  (30 is a sphenic number in the form `2 x 3 x r`)  
42 = 2 x 3 x 7 (where p=2, q=3, and r=7)  (42 is a sphenic number in the form `2 x 3 x r`)  
66 = 2 x 3 x 11 (where p=2, q=3, and r=11)  (66 is a sphenic number in the form `2 x 3 x r`)  
70 = 2 x 5 x 7 (where p=2, q=5, and r=7)  
78 = 2 x 3 x 13 (where p=2, q=3, and r=13)  (78 is a sphenic number in the form `2 x 3 x r`)    

## Sphenic Numbers in the form `2 x 3 x r`
Many shpenic numbers (such as 30, 42, 66, and 78) are in the form `2 x 3 x r`, where `r` is a prime greater than 3.  

There are many sphenic numbers in this form of `2 x 3 x r`. In this problem, you will be given a sphenic number that has the form `2 x 3 x r` and must determine `r` for that sphenic number.

## Input
Input will be a list of sphenic numbers in the form `2 x 3 x r` (except for the final number which is 0). The 0 is used to indicate there are no more sphenic numbers to process and the program should end.  
Each line (except the 0 at the end) will contain a single, positive sphenic number `s` (30 <= `s` <= 50000), that is guaranteed to be in the form `2 x 3 x r` for some prime integer r.  
Input ends when the integer 0 is read. (Zero is NOT a sphenic number, so do NOT process this value.)

## Output
For each sphenic number (in the form `2 x 3 x r`) processed, output _only_ the prime number `r` on its own line
<table><tr><th>Input</th><th>Output</th></tr>
<tr><td>`30`<br>`66`<br>`246`<br>`6234`<br>`0`</td><td>`5`<br>`11`<br>`41`<br>`1039`</td></tr></table>
