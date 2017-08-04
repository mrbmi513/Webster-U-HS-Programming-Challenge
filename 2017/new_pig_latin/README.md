# New Pig Latin
Source file: `pig.{c, cpp, java}`  
Input file: `pig.in`  

Iay cnayay spkeayay pgiyay ltnaiyay, cnayay youyay? (I can speak pig latin, can you?)  
If you can't, here are the rules for this non-traditional pig lain:
+ Take all vowels (a, e, i, o, u, or y) in a word and move them to the end of the word and then add yay to the end of the word. For this problem, y is always a vowel. Examples: `pig` -> `pgiyay`, `latin` -> `ltnaiyay`
+ If there is no vowel in a word, then simply reverse the order of the word and then add `ay` at the end. Examples: `psst` -> `tsspay`, `tv` -> `vtay`

## Input
Input consists of 1 to 500 lines, ending at the end of file. Each line contains up to 100 words, each word up to 30 characters long, using only the lowercase characters `a` to `z`. Adjacent words are separated by a single space. No punctuation or special characters will appear in the input.  

## Output
Your program should output the text translated into Pig Latin using the rules described above.

<table><tr><th>Input</th><th>Output</th></tr>
<tr><td>`i`<br>`hmm`<br>`tv`<br>`the quick brown fox`<br>`jumps over the lazy dog`<br>`and ordinary foxes`<br>`dont jump over lazy dogs`</td>
<td>`iyay`<br>`mmhay`<br>`vtay`<br>`theyay qckuiyay brwnoyay fxoyay`<br>`jmpsuyay vroeyay theyay lzayyay dgoyay`<br>`ndayay rdnroiayyay fxsoeyay`<br>`dntoyay jmpuyay vroeyay lzayyay dgsoyay`</td>
</tr></table>
