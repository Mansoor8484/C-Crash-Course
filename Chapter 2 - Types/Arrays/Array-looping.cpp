#include <iostream>

int main() {

    unsigned long maximum = 0;
    unsigned long values[] = {10,50,20,40,0};
    for (size_t i = 0; i < 5; i++)
    {
        if (values[i] > maximum) maximum = values[i];
    }
    printf("the max value  is  %lu", maximum);

    short array[]  = {104,108,32,98,105,108,108,0};
    size_t n_elements = sizeof(array) / sizeof(short);


    return 0;
}