# CDMA in Control
Source file: `cdma.{c,cpp,java}`

Input file: `cdma.in`

This problem is loosely adapted from a technique used by code division multiple access (CDMA) cell phones. CDMA allows multiple cell phones to “talk” on the same frequency at the same time. An interesting feature of this technology is that the base station must send out short messages which incrementally control the power level of the connected cell phone.

Your task is to implement the cell phone side of this system: receive a series of instructions to change power level and report the final power level. For each line of data, assume starting power level is 1000. Each line contains a series of symbols which adjust transmit power level as defined by the following table:

<table><tr><th>Symbol:</th><th>Effect on transmit power level:</td></tr>
<tr><td>+ (plus sign)</td><td>Increases by 1.</td></tr>
<tr><td>= (equals sign)</td><td>No effect.</td></tr>
<tr><td>- (minus sign)</td><td>Decreases by 1.</td></tr></table>

**Input:** Each line contains a single integer A, such that 1 ≤ A < 100, which is followed by a space and then a series of symbols of length A from the table above.

The end of the input file is designated by a line containing the value 0.

**Output:** For each line, print the final transmit power level for the device after it has processed all of the instructions.

<table><tr><th>Example input:</th><th>Example output:</th></tr>
<tr><td>4 +++=<br>8 --------<br>3 +-= <br></td><td>0<br>1003<br>992<br>1000</td></tr></table>
