# BoomBangPow
_Editor's Note: This problem is a variation of the popular interview question `FizzBuzz`, so take this problem especially seriously._  

Source file: `pow.{c, cpp, java}`  
Input file: `pow.in`  

BoomBangPow is a game that British teachers love to have their students play when they are learning about division and multiplication. The student players generally sit in a circle. The student designated to go first says the number "1", and each following player counts one number higher in turn, using the following rules:
+ Any number evenly divisible by `3` is replaced by the word `Boom`
+ Any number evenly divisible by `5` is replaced by the word `Bang`
+ Any number evenly divisible by `7` is replaced by the word `Pow`
+ Any number evenly divisible by `3` AND `5` becomes `BoomBang`
+ Any number evenly divisible by `3` AND `7` becomes `BoomPow`
+ Any number evenly divisible by `5` AND `7` becomes `BangPow`
+ Any number evenly divisible by `3` AND `5` AND `7` becomes `BoomBangPow`
+ Any number NOT divisible by `3` nor `5` nor `7` stays as is.  

A player who hesitates too long or makes a mistake is eliminated from the game.  

## Input
Input will be a list of positive integer numbers, except for the final number which is 0.  
Each line (except the zero at the end) will contain a single, positive integer `n` (1 <= `n` <= 50000).  
Input ends when the integer 0 is read.  

## Output
For each number input, give the expected output according to the game rules listed above.  
Valid outputs are `Boom`, `Bang`, `Pow`, `BoomBang`, `BoomPow`, `BoomBangPow`, or the given integer number.  
The output for each input number n should be on its own line.  

<table><tr><th>Input</th><th>Output</th></tr>
<tr><td>`3194`<br>`33627`<br>`21725`<br>`34699`<br>`6960`<br>`12222`<br>`16975`<br>`44415`<br>`0`</td>
<td>`3914`<br>`Boom`<br>`Bang`<br>`Pow`<br>`BoomBang`<br>`BoomPow`<br>`BangPow`<br>`BoomBangPow`</td>
</tr></table>
