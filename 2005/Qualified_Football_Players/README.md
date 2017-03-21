# Qualified Football Players
An NFL team is attempting to select potential players from their European counterparts.  In particular, they are seeking players for the positions of “Wide Receiver,” “Lineman,” and “Quarterback.”  Over many years of trial and error, the team’s coaching staff has determined a set of minimum requirements for players in each position.  They have considered a player’s speed (for 50 meters), weight, and strength.  These minimum requirements for each position are:

<table><tr><th>Position</th><th>Speed</th><th>Weight</th><th>Strength</th></tr>
<tr><td>Wide Receiver</td><td>4.5</td><td>150</td><td>200</td></tr>
<tr><td>Lineman</td><td>6.0</td><td>300</td><td>500</td></tr>
<tr><td>Quarterback</td><td>5.0</td><td>200</td><td>300</td></tr></table>

Using this information, a program is required to read players’ names, along with their statistics, from a data file.  For each player, the program should output the player’s name, followed by all positions for which they are qualified.  A player can play in a position if each of their attributes is greater than or equal to the minimum for weight and strength, and less than or equal to the slowest speed.  If a player is not qualified for any position, the program should output “No positions”.

The first line of the data file contains the number of players represented in the file.  Subsequent lines contain the player’s name (no spaces), followed by the three statistics shown above.

Data file: `Players.dat`

## Sample Run

Input: 	
```
4
Mike 4.0  280  300
Rick 4.0  160  210
Jim 6.5  310  520
Steve 6.0 310  510
```


Output:
``` 	
Mike  Wide Receiver  Quarterback
Rick  Wide Receiver  
Jim   No positions
Steve Lineman
```
