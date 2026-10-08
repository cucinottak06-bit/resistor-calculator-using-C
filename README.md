# resistor-calculator-using-C
## Overview
A calculator that shows a resistor's value, coding using C. This program allows an user to input the color bands of a resistor in order to calculate the resistance value and tolerance. 

## Purpose
This project's purpose is to practice C programming while also applying electrical engineering concepts. 

## Features
* Accepts a resistor's color bands
* Calculates the resistance value and tolerance
* Displays the value to the user

## How It Works
The program works only for four band resistors.
1. The first band: first digit.
2. The second band: second digit.
3. The third band: mutiplier.
4. The fourth band: tolerance.

The resistance is calculated by: Resistance = (First two digits) × 10^(Multiplier)

## Technologies Used
* C programming
* GCC compiler
* C libraries (stdio.h, math.h)

## How To Compile and Run
Compile:
gcc resistor.c -o resistor -1m

Run:
./resistor

## Skills practiced
* Functions
* Loops
* If statements
* User input
* Electrical engineering fundamentals

## Test Run

Input:
First band: 1 (Brown)
Second band: 0 (Black)
Third band: 2 (Red)
Fourth band: 10 (Gold)

Output:
Resistance: 1000.00 ohms +/- 5.00%

## Limitations
* Only supports four band resistors.
* Requires numerical color selections rather than color names.
* Does not handle non-numeric input safely.

## Future Enhancements
* Allow users to calculate for 5 band resistors
* Improve input validation
* Allows input as color names
