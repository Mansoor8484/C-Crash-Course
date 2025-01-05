#include <cstdio>
// the enum is the simpilest user defined type. The enum type is excellent for modeling categorical concepts    
enum class Race {
    Dinan,
    Teklan,
    Moiran,
    Camite,
    Julian,
    Aiden
};

int main() {
    // the "::" syntax is the scope identifier. it specifies that the members of the Race class belong to it.
    Race runner = Race::Dinan;

    switch (runner) {
        case Race::Dinan: {
            printf("you got 1st");
        } break;
        case Race::Teklan: {
            printf("you got 1st");
        } break;
        case Race::Moiran: {
            printf("you got 1st");
        } break;
        case Race::Camite: {
            printf("you got 1st");
        } break;
        case Race::Julian: {
            printf("you got 1st");
        } break;
        case Race::Aiden: {
            printf("you got 1st");
        } break;
    }



    return 0;
}