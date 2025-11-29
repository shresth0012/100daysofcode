
//Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[10];

    scanf("%s", input);

    if (strcmp(input, "MALE") == 0) p.gender = MALE;
    else p.gender = FEMALE;

    if (p.gender == MALE)
        printf("Male");
    else
        printf("Female");

    return 0;
}
