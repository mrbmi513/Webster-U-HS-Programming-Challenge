# Code Breaking
It is believed that your enemy is hiding secret words in strings of text being sent across a computer network.  A secret word is said to be contained in a string of text if the letters of the secret word exist in the correct order; the letters of the secret word may or may not be consecutive in the string of text.  

You will be given an input file in which the first line is the text being sent across the network.  This string of text will contain no spaces or punctuation characters and will only include upper case letters.  The next line is an integer, n, representing the number of secret words being tested.  There will then be n more lines with one secret word per line, each being written only in upper case letters.

You are required to write a program to read the input file described above and write out those secret words that are contained in the string of text.

In the example below, the letters of CALIFORNIA and JET are contained in string of text in the correct order.  The letters of MILITARY are contained in the string of text but in the wrong order, hence MILITARY is not displayed.  The letters of ZOO are not in the string of text, hence ZOO is not displayed.

Data file: `Code.in`

## Sample Run

Input:
```
XCYTALIGHJHFOMNRNTIEAT
4
CALIFORNIA
MILITARY
JET
ZOO
```

Output:
```
CALIFORNIA
JET
```
