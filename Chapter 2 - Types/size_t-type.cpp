#include <cstdio>
// the size_t type is availaible in the cstddef library
#include <cstddef>

int main() {
    size_t size_c =  sizeof(char);
    printf("char: %zd  bytes\n", size_c);
    size_t size_s = sizeof(short);
    printf("short: %zd bytes\n", size_s);
    size_t size_i = sizeof(int);
    printf("size_i: %zd bytes\n", size_i);
    size_t size_l = sizeof(long);
    printf("long: %zd bytes\n", size_l);
    size_t size_ll  = sizeof(long long);
    printf("long long: %zd bytes\n", size_ll);
}