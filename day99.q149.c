//Q149: Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter student details (name roll marks): ");
    scanf("%s %d %d", s->name, &s->roll, &s->marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    free(s);
    return 0;
}
