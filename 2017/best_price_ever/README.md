# Best Price Ever!
Source file: `discount.{c, cpp, java}`  
Input file: `discount.in`  

Who doesn't love a good sale? Brooklynn's favorite activity is to look for the best discounts at local shops.  

Just yesterday Brooklynn went to the Schnucks grocery store to purchase a box of Frosted Flakes cereal. To her delight, she found that Frosted Flakes, which usually sells for $3.95 were on sale for $2.99.  

Brooklynn wants a program to calculate the percent of the discount, given the original price and the sale price.

## Input
Each line of input will contain two prices, the original price `p1` followed by the sale price of an item `p2`. The two prices will be separated by a single space. Each of these two prices, `p1` and `p1` (0.01 <= `p1`, `p2` <= 99999.99) will be a floating point value representing dollars and cents.  

Input ends with a line containing 2 zero prices. Do not process the zero prices.  

## Output
For each pair of prices processed, display `The discount is N%.` where N represents the percent discount rounded correctly to the nearest whole number.  

<table><tr><th>Input</th><th>Output</th></tr>
<tr><td>`3.95 2.99`<br>`100.00 70.00`<br>`200.00 164.75`<br>`15.98 11.94`<br>`499.99 494.34`<br>`0.00 0.00`</td><td>`The discount is 24%.`<br>`The discount is 30%.`<br>`The discount is 18%.`<br>`The discount is 25%.`<br>`The discount is 1%.`</td></tr></table>
