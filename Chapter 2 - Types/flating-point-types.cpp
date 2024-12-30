#include <cstdio>

int main(){
    // float a = 0.1f;
    // double b = 0.2;
    // long double c = 0.3L;

    // printf("%f", a);
    double an = 6.0221409e23;
    // le provides scientific notation
    // lf gives the decimal representation
    // lg chose the scientific notation
    printf("Avagordos number: %le %lf %lg \n", an, an, an);
    float hp = 9.75;
    printf("Hogwarts Platform: %e %f %g\n", hp, hp, hp );
}

//floating pointnumbers can have different levels of percision. More percision = more memory consumed.

//C++ three levels of percision
//float: single percision
//double: double percision
// long double: extended percision

//floating point numbers are double percision by  default. single percisiomn can be specified by either using the f OR F suffix. extended percision can be specified by using the l  OR L suffix.