// Midterm includes today's lecture

/*
Numbers: non-negative 
         integers
External Representation: dec(base 10)
Internal Representation: bin(1's and 0's)
    Data can be stored as high voltage or low voltage
    High Voltage = 1
    Low Voltage = 0 
Each position is a bit (can store either a 1 or a 0)
8 bits make a byte
_   _  _  _  _ _ _ _ 
128 64 32 16 8 4 2 1

5 would be 
1 unit of 4 and 1 unit of 1
0   0  0  0  0 1 0 1 
_   _  _  _  _ _ _ _

Decimal (Base 10), Digits (0-9)
Binary (Base 2), Digits (0,1)
Hex (Base 16), Digits (0-9,A-F)

Hex:
10  is A
11  is B
12  is C 
and so on
_   _  _
256 16 1

To represent 33 it would be 21 because 2 times 16 then 1 times 1
33 in binary would be 100001

Hex is used to represent memory locations

    1  0 1
_   _  _ _
125 25 5 1 

To say that you're writing in binary put ob101 which is the decimal value 5
int x = ob101

To say you're writing in hex, put ox101 which is the decimal value 257
int x = ox101 

Converting between bases
Binary to decimal 10110 base 2 = ? base 10
22

Decimal to binary 34 base 10 = ? base 2
10010

Hex to binary 25B base 16 = ? base 2
25B
Can take each separate aspect 
1 0 0 1 0 1 0 1 1
_ _ _ _ _ _ _ _ _ 

Decimal to hex
36 base 10 = ? base 16
ox24

Binary to hex: 1000111100
Group from right to left into 4 bits
And then figure out what the binary number is for each

Encoding scheme: a table that designates patterns to symbols
It's generalized

n bits -> 2^n patterns
The maximum positive value that can be stored in a byte is 255
Because 0 exists

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Negative numbers (NOT ON EXAM)
2's complement
_  _ _ _
-8 4 2 1 

So -7 would be
1 0 0 1

-6 would be
1 0 1 0
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Map characters to numbers using ASCII scheme

*/

