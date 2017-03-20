# Encryption
The term *plaintext* refers to a message in "ordinary" form. The term *ciphertext* refers to an encrypted form of some plaintext. The process of translating plaintext to ciphertext is called *encoding* and the inverse process is called *decoding*.

Develop a program that, given as input a string of characters (serving as plaintext), outputs its ciphertext, according to the following encoding scheme:
+ Each vowel in plaintext is translated into the vowel following it in the sequence **A, E, I, O, U, A**.
+ Any character that is not a vowel is translated into itself.

The first line of the input file contains an integer, n, representing the number of plaintext phrases to encode. The file will then contain n plaintext phrases, one per line.

You may assume that the plaintext given as input contains no lower case letters and has length no greater than 40.

Data file: `Encryption.dat`   Save program on: `Encryption.cpp(.java)`

## Sample Run
Input:
```
4
COMPUTER PROGRAMMING
LANGUAGES
DATA STRUCTURES
ALGORITHMS
```
Output:
```
CUMPATIR PRUGREMMONG
LENGAEGIS
DETE STRACTARIS
ELGUROTHMS
```
