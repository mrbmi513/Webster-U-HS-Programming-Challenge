# I Want Candy!
Source file: `candy.{c, cpp, java}`  
Input file: `candy.in`  

Every Halloween, the young children dress up in costumes and form groups to knock on the neighbors' doors hoping for candy. One new slightly grumpy neighbor, Mr. Stone, is having a hard time figuring out how to handle this annual tradition of ghosts and goblins begging at his door.  

Every time the doorbell rings, Mr. Stone grabs some candy bars from the bowl in his kitchen and cautiously makes his way to the front door to face the terrifying group of creatures on his porch.  

As he opens the door, he loudly proclaims, "You get what you get and you don't throw a fit!" Then Mr. Stone proceeds to give one candy bar to each child until he has given each child a candy bar or he has run out of candy bars.  

Write a program to determine the number of children in each group who will NOT get a candy bar from this neighbor, given the number of children in the group and the number of candy bars that Mr. Stone selects for the group.  

## Input
Each line of input contains two positive integer values `b` and `c`, except the last line which contains two zeroes. Each line represents one visit from one group of children to Mr. Stone's house. The two values are separated by a single space.  

The first value `b` (1 <= `b` <= 100), represents the number of candy bars that Mr. Stone takes from the bowl.  

The second value `c` (1 <= `c` <= 100), represents the number of children in the group.  

Input ends with a line containing 2 zero values. Do not process the zero numbers.  

## Output
For each pair of valid numbers processed, display the number of children who will NOT receive a candy bar, as shown in the sample output.  

State the word `Group` followed by 1 space and then the group number (starting at 1), followed by a colon and one space.  

Then state the number of children who will not get candy as `1 child will not get candy.` or `N children will not get candy.` where N does not equal one.  

<table><tr><th>Input</th><th>Output</th></tr>
<tr><td>`2 2` <br>`6 7`<br>`4 9`<br>`0 0`</td><td>`Group 1: 0 children will not get candy.`<br>`Group 2: 1 child will not get candy.`<br>`Group 3: 5 children will not get candy.`</td></tr></table>
