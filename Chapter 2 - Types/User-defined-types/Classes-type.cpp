#include <cstdio>

struct book{
    int year;
    int pages;
    bool hardcover;
    char name[256];
};

int main() {
    book mere_christianity;

    int p = mere_christianity.pages =  212;
    printf("mere christianity has %d pages", p);
    
    return 0;
}