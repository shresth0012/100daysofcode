
// Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].roll_no);
        scanf("%d", &students[i].marks);
    }

    for (i = 0; i < 5; i++) {
        printf("Name: %s | Roll: %d | Marks: %d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
