#include <cstdio>

union variant
{
    char String[10];
    int integer;
    double floating_point;
};

// treat each user defined variable as what it is, a class. declare the class in the main class by printing the class name then the name of the specific class.

int main() {
    variant v;
    v.integer = 42;
    v.floating_point = 43.23234;

    variant e;
    e.integer = 43;
    e.floating_point = 43.84338;


}