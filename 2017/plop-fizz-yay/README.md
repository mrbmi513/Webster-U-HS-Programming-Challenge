# Plop-Fizz-Yay
_Editor's Note: This problem is an extension of the [BoomBangPow problem](https://github.com/mrbmi513/Webster-U-HS-Programming-Challenge/tree/master/2017/boombangpow)._  

Source file: `fizz.{c, cpp, java}`  
Input file: `fizz.in`  

A group of British High School students who grew up playing BoomBangPow decided to change the rules to make it more challenging. They are calling this new game "Plop-Fizz-Yay" after the old Alka-Seltzer slogan "Plop-Plop, Fizz-Fizz, Oh, what a relief it is!"  

They would like you to write a program that displays Plop, Fizz, Yay according to all the rules listed below, executed in the order given:
+ Any number evenly divisible by `3` displays the word `Plop`.
+ Any number that contains the digit `3` displays the word `Plop` (one per digit `3`).
+ Any number evenly divisible by `5` displays the word `Fizz`.
+ Any number that contains the digit `5` displays the word `Fizz` (one per digit `5`).
+ Any number evenly divisible by `7` displays the word `Yay`.
+ Any number that contains the digit `7` displays the word `Yay` (one per digit `7`).
+ Any number NOT divisible by `3` nor `5` nor `7` AND does not contain a digit `3` nor `5` nor `7` displays the original number.


## Input
Input will be a list of positive integer numbers, except for the final number which is 0.  
Each line (except the zero at the end) will contain a single, positive integer `n` (1 <= `n` <= 50000).  
Input ends when the integer 0 is read.  

## Output
For each number input, give the expected output according to the game rules listed above.  
Display a dash after each output of Plop, Fizz, or Yay, except at the end of the line of output.  
The output for each input number n should be on its own line.  

<table><tr><th>Input</th><th>Output</th></tr>
<tr><td>`622`<br>`143`<br>`1902`<br>`410`<br>`566`<br>`14`<br>`907`<br>`29835`<br>`32333`<br>`2177`<br>`37077`<br>`35367`<br>`41335`<br>`5555`<br>`5275`<br>`0`</td>
<td>`622`<br>`Plop`<br>`Plop`<br>`Fizz`<br>`Fizz`<br>`Yay`<br>`Yay`<br>`Plop-Plop-Fizz-Fizz`<br>`Plop-Plop-Plop-Plop-Yay`<br>`Yay-Yay-Yay`<br>`Plop-Plop-Yay-Yay-Yay`<br>`Plop-Plop-Plop-Fizz-Yay`<br>`Plop-Plop-Plop-Fizz-Yay`<br>`Fizz-Fizz-Fizz-Fizz-Fizz`<br>`Fizz-Fizz-Fiz-Yay`</td>
</tr></table>
