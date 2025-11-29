
//Find and print the student with the highest marks.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n, i, top = 0;
    scanf("%d", &n);
    struct Student students[n];

    for (i = 0; i < n; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].roll_no);
        scanf("%d", &students[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[top].marks)
            top = i;
    }

    printf("Topper: %s (Marks: %d)\n", students[top].name, students[top].marks);

    return 0;
}
