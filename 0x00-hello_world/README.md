# 0x00-hello_world
## 0. Preprocessor
Writes a script that runs a C file through the preprocessor and save the result into another file.
The C file name is saved in the variable $CFILE
The output is saved in the file c
## 1. Compiler
Writes a script that compiles a C file but does not link.
The C file name will be saved in the variable $CFILE
The output file  is named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file is main.o
## 2. Assembler
Writes a script that generates the assembly code of a C code and save it in an output file.
The C file name is saved in the variable $CFILE
The output file is named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file is be main.s
## 3. Name
Writes a script that compiles a C file and creates an executable named cisfun.
The C file name is saved in the variable $CFILE
## 4. Hello, puts
Writes a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
Uses the function puts
The program ends with the value 0
## 5. Hello, printf
Writes a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
Uses the function printf
The program returns 0
The program compiles without warning when using the -Wall gcc option
## 6. Size is not grandeur, and territory does not make a nation
Writes a C program that prints the size of various types on the computer it is compiled and run on.
The program returns 0
