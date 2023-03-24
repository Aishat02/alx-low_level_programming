# 0x10-variadic_functions
## 0. Beauty is variable, ugliness is constant
Writes a function that returns the sum of all its parameters.
> Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0
## 1. To be is to be the value of a variable
Writes a function that prints numbers, followed by a new line.
> Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between numbers
and n is the number of integers passed to the function
If separator is NULL, it doesn't print it
## 2. One woman's constant is another woman's variable
Writes a function that prints strings, followed by a new line.
> Prototype: void print_strings(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between the strings
and n is the number of strings passed to the function
If separator is NULL, don’t print it
If one of the string is NULL, prints (nil) instead
## 3. To be is a to be the value of a variable
Writes a function that prints anything.
> Prototype: void print_all(const char * const format, ...);
where format is a list of types of arguments passed to the function
c: char
i: integer
f: float
s: char * (if the string is NULL, print (nil) instead
any other char is ignored

