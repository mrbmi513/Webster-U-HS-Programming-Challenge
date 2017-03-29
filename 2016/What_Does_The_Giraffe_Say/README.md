# What does the Giraffe say?

Source file: `giraffe.{c, cpp, java}`

Input file: `giraffe.in`

You are determined to answer the question: "What does the giraffe say?" You take a high quality digital audio
recorder deep into the forest and leave it to record the animal sounds.
The forest is, however, full of animals’ voices, and on your recording, many different sounds can be heard. But
you are well prepared for your task: you know exactly all the sounds which other animals make. Therefore the
rest of the recording—all the unidentified noises—must have been made by the giraffe.

## Input
The first line of input is an integer value n (1 ≤ n ≤ 100) representing the number of lines of known animals
sounds that follow.

Each of the n lines of information about other animals is in the format <animal> goes <sound>. No animal
name or animal sound is longer than 100 characters and all are lower case. (There is no "giraffe goes" among
these lines.)

Following this, there will be one or more pairs of lines:
+ The first line of each of the pairs will contain one recordings that will contain at most 250 words (all
lower case) separated by spaces.
+ The second line of each of the pairs is exactly the question you are supposed to answer: what does the
giraffe say?

Input terminates at the end of the file.

## Output
For each "what does the giraffe say?" question, output one line containing the sounds made by the giraffe, in
the order found in the prior recording. You may correctly assume that the giraffe was not silent.

## Test Cases
**Input**
```
18
bee goes buzz
bird goes tweet
bull goes bellow
calf goes bawl
fish goes blub
fly goes mmm
frog goes croak
goat goes behhhh
goose goes haanhk
grasshopper goes chirp
hog goes grunt
horse goes neigh
hummingbird goes hum
hyena goes laugh
jackal goes howl
lamb goes bahht
monkey goes eee
rabbit goes drum
mmm smak ow laugh lic blub wow mmm croak wow behhhh wow haanhk chirp
leeeves grunt blah neigh hum laugh boom howl blah ow
what does the giraffe say?
behhhh weee blah eeee mmm birp mmm behhhh smak blah eee ee lic blah
what does the giraffe say?
```
**Output**
```
smak ow lic wow wow wow leeeves blah boom blah ow
weee blah eeee birp smak blah ee lic blah
```
