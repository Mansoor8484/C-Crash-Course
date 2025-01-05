#include <cstdio>

struct ClockOfTheLongNow{
    ClockOfTheLongNow() { //this is a constructor. constructors are given the same name as the class.
        year = 2019;
    }
    void add_year() {
        year++;
    }
    bool set_year(int new_year) {
        if (new_year >= 2019) {
            year = new_year;
            return true;
        } else {
            return false;
        }
    }
    int get_year() {
        return year;
    }

private:
    int year;
};

int main() {
    ClockOfTheLongNow clock;
    printf("default year: %d\n", clock.get_year());
}