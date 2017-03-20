# Nth Root
Source file: `roots.{c, cpp, java}`

Input file:  `roots.in`

Tables can be a useful way to get acquainted with mathematical functions. Almost everyone has seen a multiplication table at some point, but tables can be made for any function that accepts two parameters.

For this problem, you will create such a table for the Nth root function. The square root of a positive number A is the positive number B, such that B multiplied by itself (i.e. B squared) equals A. Other roots of a number exist: the cube root of positive number A is the positive number B, such that B to the third power equals A. In general, the Nth root of a number A is B such that B raised to the Nth power is A.

(Hint: you can calculate the Nth root of a number M by taking M to the power of 1/N.)

**Input:** Each line contains two integers A and B, such that 1 ≤ A < 50 and 1 ≤ B < 100.

The end of the input is designated by a line containing the value 0.

**Output:** For each line, print a table with rows from 1 to A and columns from 1 to B. For each cell (R, C) in the table, print the Cth root of R. Print to 2 decimal places accuracy, as shown. Print a blank line after each table.

<table><th>Example input:</th><th>Example output:</th></tr>
<tr><td>4 4<br>4 3<br>0</td><td>1.00 1.00 1.00 1.00<br>2.00 1.41 1.26 1.19<br>3.00 1.73 1.44 1.32<br>4.00 2.00 1.59 1.41<br><br>1.00 1.00 1.00<br>2.00 1.41 1.26<br>3.00 1.73 1.44<br>4.00 2.00 1.59</td></tr></table>
