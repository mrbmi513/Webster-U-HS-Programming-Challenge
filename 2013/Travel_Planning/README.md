# Travel Planning
Source file:
travel.{c, cpp, java}
Input file:
travel.in
Travel Company, Djskstragoesfunny, offers travel plans at an affordable price for college students. After the downturn in the economy, it is more important than ever to get the best deal in traveling, namely the lowest cost, most cities and longest distance visited. Consider, for example, the following table for travels of varying numbers of cities, distance and price:
<table><tr><th colspan=3>Menu</th></tr>
<tr><th>Number of cities</td><th>Total distance</td><th>Price</td></tr>
<tr><td>5 cities</td><td>1.2k miles</td><td>$3k</td></tr>
<tr><td>10 cities</td><td>1.5k miles</td><td>$6k</td></tr>
<tr><td>12 cities</td><td>3.1k miles
</td><td>$8k</td></tr>
</table>

One could compute the cost per city per mile, which would be approximately $0.5, $2.5, and $0.215 respectively. In this example the 12-cities travel plan is the best value. However, if the 5-cities had been sold for $1k, it would have been the best value. You can assume all costs and the number of cities will be unique in each dataset.
Your task is to analyze a few travel plans, compare the prices and find out which travel option offers the best value on a dollar per city per mile basis.
Input: The input contains a series of one or more travel menus. The first line of the file contains the number of menus M, 1 ≤ M ≤ 20. Each menu starts with the number of options N, 1 ≤ N ≤ 20, followed by N lines, each containing three values respectively designating a travel plan's number of cites C, total distance D (in kilo-miles) and price P (in thousands of dollars), with 1 ≤ C ≤ 20, 1 ≤ D ≤ 40 and 1 ≤ P ≤ 100. The end of the input will be designated with a line containing the number 0.
Output: For each menu, print a line identifying the travel plan’s number and the number of cities C of the travel with the best value, using the format shown below.
<table>
<tr><th>Example input:</th><th>Example output:</th></tr>
<tr><td>
3<br>
3<br>
5 24 2.5<br>
10 20 6.1<br>
12 10 8.7<br>
3<br>
5 34 2.3<br>
10 25 5<br>
12 12 8.2<br>
4<br>
1 10 1<br>
24 14 33.1<br>
13 15 11.4<br>
6 12 11.25<br>
0<br>
</td><td>
Plan 1: 5<br>
Plan 2: 5<br>
Plan 3: 13<br>
</td></tr>
</table>
