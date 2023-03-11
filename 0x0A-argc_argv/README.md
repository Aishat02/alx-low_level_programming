# 0x0A-argc_argv
## 0. It ain't what they call you, it's what you answer to
Writes a program that prints its name, followed by a new line.
If the program is renamed, it will print the new name, without having to compile it again
## 1. Silence is argument carried out by other means
Writes a program that prints the number of arguments passed into it.
The program prints a number, followed by a new line
## 2. The best argument against democracy is a five-minute conversation with the average voter
Writes a program that prints all arguments it receives.
All arguments are printed, including the first one
Only print one argument per line, ending with a new line
## 3. Neither irony nor sarcasm is argument
Writes a program that multiplies two numbers.
The program prints the result of the multiplication, followed by a new line
I assumed that the two numbers and result of the multiplication can be stored in an integer
If the program does not receive two arguments, the program prints Error, followed by a new line, and returns 1
## 4. To infinity and beyond
Writes a program that adds positive numbers.
Prints the result, followed by a new line
If no number is passed to the program, it prints 0, followed by a new line
If one of the number contains symbols that are not digits, prints Error, followed by a new line, and returns 1
I assumed that numbers and the addition of all the numbers can be stored in an int
##  5. Minimal Number of Coins for Change
Writes a program that prints the minimum number of coins to make change for an amount of money.
Usage: ./change cents
where cents is the amount of cents you need to give back
if the number of arguments passed to  the program is not exactly 1, it prints Error, followed by a new line, and returns 1
> atoi is used to parse the parameter passed to the program
If the number passed as the argument is negative, it prints 0, followed by a new line
I used an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
