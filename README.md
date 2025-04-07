Simple Expressions Compiler
This repository contains a simple compiler written in C++ using Flex and Bison that parses and evaluates mathematical expressions, including the calculation of averages. The main feature of this compiler is to calculate the average of four numbers entered by the user.

Features
Input Parsing: The compiler supports parsing expressions like x = a + b + c + d / 4; and NIKHILESH X = 10, 20, 30, 40;.

Three Address Code Generation: The program generates a Three Address Code for each expression.

Code Optimization: Optimizes simple expressions such as the calculation of averages.

Evaluated Results: Evaluates and outputs the result of expressions in a human-readable format.

Final Code Output: Stores the result in a variable, like X in the case of the average calculation.

Files in the Repository
lexer.l: Defines the lexical analyzer used by Flex.

parser.y: Defines the grammar for the parser processed by Bison.

main.cpp: Contains the main logic for interacting with the lexer and parser.

Makefile: Automates the build process.

Prerequisites
To build and run the compiler, you need to have the following tools installed:

Flex: A tool to generate lexical analyzers.

Bison: A parser generator.

G++: A C++ compiler.

Installation Instructions
Ubuntu/Debian
You can install Flex, Bison, and G++ by running:

bash
Copy
sudo apt-get install flex bison g++
macOS (using Homebrew)
If you're on macOS, you can install the required tools with:

bash
Copy
brew install flex bison g++
Building the Compiler
Clone the repository:

bash
Copy
git clone https://github.com/your-username/compiler-for-expressions.git
cd compiler-for-expressions
Run the make command to compile the project:

bash
Copy
make
This will produce the mycompiler executable.

Usage
Once the compiler is built, you can run the program as follows:

bash
Copy
./mycompiler
You will be prompted to enter an expression. For example, to calculate the average of four numbers:

Example Input
cpp
Copy
Enter expression ( NIKHILESH eg:-10, 20, 30, 40;): NIKHILESH X = 10, 20, 30, 40;
Example Output
text
Copy
[Three Address Code] 
t1 = 10.00 + 20.00
t2 = t1 + 30.00
t3 = t2 + 40.00
X = t3 / 4

[Final Code] 
STORE X
In this case, the compiler calculates the average of the four numbers 10, 20, 30, 40 and stores the result in X.

Supported Expressions
Average Calculation (NIKHILESH Example):

You can calculate the average of four numbers by entering:

cpp
Copy
NIKHILESH X = 10, 20, 30, 40;
Simple Mathematical Expressions:

For example, you can use the following to compute a more generic mathematical expression:

cpp
Copy
x = (a + b + c + d) / 4;
Cleaning Up
To remove the compiled files, you can run:

bash
Copy
make clean
This will remove the mycompiler executable and any other generated files.

License
This project is licensed under the MIT License.

This README file is concise and clearly explains how to use the program for average calculation as well as how to build and run the compiler. Let me know if you need any changes!


