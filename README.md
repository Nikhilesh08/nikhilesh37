Compiler for Simple Expressions
This repository contains a simple compiler written in C++ using Flex and Bison to parse and evaluate expressions for basic calculations like interest and average calculations.

Features
Input Parsing: The compiler supports a variety of input expressions like SI = (P * R * T) / 100; and NIKHILESH X = 10, 20, 30, 40;.

Three Address Code Generation: The program generates a Three Address Code for expressions.

Code Optimization: It performs basic optimization for certain expressions like calculating simple interest.

Evaluated Results: The compiler evaluates expressions and outputs the result in a human-readable format.

Final Code Output: The final code stores the result in a variable.

Files
lexer.l: The lexer definition file, processed by Flex.

parser.y: The parser definition file, processed by Bison.

main.cpp: The main program that interacts with the lexer and parser.

Makefile: A Makefile to automate the build process.

Prerequisites
Flex: A tool to generate lexical analyzers.

Bison: A parser generator.

G++: A C++ compiler.

To install Flex and Bison, you can run:

For Ubuntu/Debian:

bash
Copy
sudo apt-get install flex bison g++
For macOS (using Homebrew):

bash
Copy
brew install flex bison g++
Building the Compiler
Clone the repository:

bash
Copy
git clone https://github.com/your-username/compiler-for-expressions.git
cd compiler-for-expressions
Run make to compile the project:

bash
Copy
make
This will produce the mycompiler executable.

Usage
Once the compiler is built, you can run the program and enter your expressions:

bash
Copy
./mycompiler
You will be prompted to enter an expression, for example:

cpp
Copy
Enter expression (e.g., SI = (P * R * T) / 100; or NIKHILESH X = 10, 20, 30, 40;):
SI = (10 * 5 * 2) / 100;
Output:

csharp
Copy
[Three Address Code]
t1 = 10.00 * 5.00
t2 = t1 * 2.00
SI = t2 / 100

[Optimized Instructions]
SI SI = 10, 5, 2

[Evaluated Result] SI = 1.00

[Final Code]
STORE SI
Supported Expressions
Simple Interest Calculation (SI):

Example: SI = (P * R * T) / 100;

Average Calculation (NIKHILESH):

Example: NIKHILESH X = 10, 20, 30, 40;

Cleaning Up
To remove the compiled files, run:

bash
Copy
make clean
License
This project is licensed under the MIT License.