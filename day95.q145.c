
// Return a structure containing top student's details from a function.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student getTopper(struct Student students[], int n) {
    int i, top = 0;
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[top].marks)
            top = i;
    }
    return students[top];
}

int main() {
    int n, i;
    scanf("%d", &n);
    struct Student students[n];

    for (i = 0; i < n; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].roll_no);
        scanf("%d", &students[i].marks);
    }

    struct Student topper = getTopper(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll_no, topper.marks);

    return 0;
}
