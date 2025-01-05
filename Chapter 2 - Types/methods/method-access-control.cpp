#include <cstdio>

struct ClockOfTheLongNow {
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
    ClockOfTheLongNow clock; // we create an instance of the ClockOfTheLongNow class and name it clock
    if (clock.set_year(2018)) { //if statement that uses the isnatnce of ClockOfTheLongNow name clock to referance the method "set_year". The parameter accepeted is an ont, in this case, 2018
        printf("Year is set to %d\n", clock.get_year()); //returns the year is the function s
    } else {
        printf("Failed to set year %d\n", clock.get_year());
    }

    return 0;
}