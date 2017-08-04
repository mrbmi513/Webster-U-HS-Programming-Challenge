# Triple Play
Source file: `triple.{c, cpp, java}`  
Input file: `triple.in`  

A _Pythagorean Triple_ is a sequence of 3 integers `a`, `b`, and `c`, satisfying the following properties:
+ 0 < `a` < `b` < `c`
+ `a`<sup>2</sup> + `b`<sup>2</sup> = `c`<sup>2</sup>

A _Primitive Pythagorean Triple_ is a sequence of 3 integers `a`, `b`, and `c`, satisfying the following properties:
+ 0 < `a` < `b` < `c`
+ `a`<sup>2</sup> + `b`<sup>2</sup> = `c`<sup>2</sup>
+ `a`, `b`, and `c` are co-prime, meaning there is no positive number, other than 1, that evenly divides **all three** numbers.

Write a program that accepts 3 integers as input and reports whether they form a Pythagorean Triple, a Primitive Pythagorean Triple, or neither.

## Input
The first line contains an integer `n` (1 <= `n` <= 1000) indicating the number of sets of triples to be tested.  
Then follow `n` lines with 3 space separated integers representing the triple `a b c` (1 <= `a`, `b`, `c` <= 2000)

## Output
Output the triple with a single space between the values, followed by a colon and a space.  

If the triple is a valid Primitive Pythagorean Triple, display `Primitive Pythagorean Triple`  
If the triple is a valid Pythagorean Triple (but NOT primitive), display `Pythagorean Triple`  
If the triple is not a valid Pythagorean Triple, display `not valid`.

<table><tr><th>Input</th><th>Output</th></tr>
<tr><td>`3`<br>`3 4 5`<br>`6 8 10`<br>`4 3 5`</td>
<td>`3 4 5: Primitive Pythagorean Triple`<br>`6 8 10: Pythagorean Triple`<br>`4 3 5: not valid`</td>
</tr></table>
