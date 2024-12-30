#include <cstdio>

int main(){
    unsigned short a = 0b10101010;
    printf("%hu\n", a);
    int b = 0123;
    printf("%d\n", b);
    unsigned long long d = 0xFFFFFFFFFFFFFFFF;
    printf("%llu\n", d);
    int c = 9;
    printf("%d", c);

}

// four types of integers: short int, int, long int, long long int.

// each type: short int, int, long int, long long int can be either signed or unsigned.

//To be an signed integer, the  int must be positive, negative or 0. An unsigned int must be a NON-negative. 

// literals - hardcoded values in a program.
// integer literals include: 
// binary: 0b
// octal: 0
// decimal: default notation
// hex: 0x


