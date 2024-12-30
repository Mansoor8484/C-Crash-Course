#include <cstdio>

int main(){
    char x = 'M';
    // the prefix 'L' is added because this is a not a  char.
    wchar_t y = L'Z';
    signed char z = L'A';
    printf("Windows binaries start with %c%lc%c.\n", x, y, z);

}

//six different types of chars:
// char: default type, always 1 byte, may or may not be signed

// char16_t: used for 2-byte character sets.
// char32_t: used for 4 byte character sets.
// signed char:  same as char but  signed
// unsigned char:  same as char but unsigned
// wchar_t: large enough to contain the largest character of the  implementations locale.

//a character literal is  a single '' surrounding a character. 

//the format  specifier  for a char is %c.