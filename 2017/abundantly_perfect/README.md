# Abundantly Perfect
Source file: `dap.{c, cpp, java}`  
Input file: `dap.in`  

The proper factors of a positive number are all of the distinct factors other than the number itself.  
For instance, the factors of 10 are 1, 2, 5, and 10, but the proper factors of 10 are only 1, 2, and 5.  
Every positive number can be classified as abundant, deficient, or perfect, according to the following definitions:

### Deficient
The sum of the proper factors is less than the number itself.  
14 is deficient since 1 + 2 + 7 < 14

### Abundant
The sum of the proper factors is greater than the number itself.  
12 is abundant since 1 + 2 + 3 + 4 + 6 > 12

### Perfect
The sum of the proper factors is equal to the number itself.  
28 is perfect since 1 + 2 + 4 + 7 + 14 = 28

## Input
Input will be a list of positive integer numbers, except for the final number which is 0.  
Each line (except the zero at the end) will contain a single, positive integer `n` (1 <= `n` <= 50,000,000).  
Input ends when the integer 0 is read.  

## Output
For each given number, output whether the number is deficient, abundant, or perfect according to the definitions given aboce.  
Acceptable output is `N is deficient` or `N is abundant` or `N is perfect`, where N is the input number.

<table><tr><th>Input</th><th>Output</th></tr>
<tr><td>`28`<br>`1000`<br>`4321`<br>`0`</td>
<td>`28 is perfect`<br>`1000 is abundant`<br>`4321 is deficient`</td>
</tr></table>
