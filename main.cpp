#include <iostream>

extern int yyparse();

int main() {
    std::cout << "Enter expression (e.g., SI = (P * R * T) / 100; or NIKHILESH X = 10, 20, 30, 40;):\n";
    yyparse();
    return 0;
}
