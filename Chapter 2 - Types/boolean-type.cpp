#include <cstdio>
#include <cstddef>

int main() {
    // // true  will render to  1 on the command line  and false will render  to 0.
    // bool b1 = true;
    // bool  b2 = false;
    // printf("%d %d", b1, b2);


    // //comparison operators
    // printf("7 == 7: %d\n", 7 ==  7); //this will render to true.
    // printf(" 7 != 7: %d\n", 7 != 7); // this will render to false.
    // printf(" 10 > 20: %d\n",  10 > 20);
    // printf("10 >= 20: %d\n", 10 >= 20);
    // printf("10 < 20: %d\n", 10 < 20);
    // printf("20 <= 20: %d\n", 20  <= 20);

    //logical operators
    bool t = true;
    bool f  =  false;
    printf("!true: %d\n", !t);
    printf("true && false: %d\n",t && f);
    printf("true && !false: %d\n",t && !f);
    printf("true  || false: %d\n",  t || f);
    printf("false || false: %d\n", f || f);


}

// the %d format specifier  can bw used when representing a boolean value.
