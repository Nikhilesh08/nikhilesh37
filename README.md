Simple Expressions Compiler

This repository contains a simple compiler written in C++ using Flex and Bison that parses and evaluates mathematical expressions, including the calculation of averages. The main feature of this compiler is to calculate the average of four numbers entered by the user.

Features

- Input Parsing: The compiler supports parsing expressions like x = a + b + c + d / 4; and NIKHILESH X = 10, 20, 30, 40;.

- Three Address Code Generation: The program generates a Three Address Code (TAC) for each expression.

- Code Optimization: The compiler optimizes simple expressions, such as the calculation of averages.

- Evaluated Results: The program evaluates and outputs the result of expressions in a human-readable format.

- Final Code Output: The result is stored in a variable (e.g., X in the case of the average calculation).

Files in the Repository

- lexer.l: Defines the lexical analyzer used by Flex.
  
- parser.y: Defines the grammar for the parser processed by Bison.
  
- main.cpp: Contains the main logic for interacting with the lexer and parser.
  
- Makefile: Automates the build process.

Prerequisites

To build and run the compiler, you need to have the following tools installed:

- Flex: A tool to generate lexical analyzers.
- Bison: A parser generator.
- G++: A C++ compiler.

Installation Instructions

Ubuntu/Debian
To install Flex, Bison, and G++, run the following:

sudo apt-get install flex bison g++

macOS (using Homebrew)
If you're on macOS, install the required tools with:

brew install flex bison g++

Building the Compiler

1. Clone the repository:

git clone https://github.com/your-username/compiler-for-expressions.git
cd compiler-for-expressions

2. Compile the project:

Run the make command to compile the project and produce the mycompiler executable.

make

Usage

Once the compiler is built, you can run it by entering the following command:

./mycompiler

You will be prompted to enter an expression. Here is an example:

Example Input:

Enter expression ( NIKHILESH eg:-10, 20, 30, 40;): NIKHILESH X = 10, 20, 30, 40;

Example Output:

[Three Address Code]
t1 = 10.00 + 20.00
t2 = t1 + 30.00
t3 = t2 + 40.00
X = t3 / 4

[Final Code]
STORE X

In this
