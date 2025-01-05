#include <cstdio>

// methods are member functions. they create a connection betweena  class and its data members. 

struct ClockOfTheLongNow 
{
    // declare a method by using the void keyword followed by the name of the method.
    // the void kwy word indicates that the method itseld will not return a value
    void add_year() {
        year++;
    }
    int year;
};


int main() {
    ClockOfTheLongNow clock1; // creating an instance of the class
    clock1.year = 2024;
    clock1.add_year();
    printf("year: %d\n", clock1.year);
    clock1.add_year();
    printf("year: %d\n", clock1.year);


};