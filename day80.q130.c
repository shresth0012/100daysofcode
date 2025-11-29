
//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        return 1;
    }

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", s.name);
        scanf("%d", &s.roll);
        scanf("%d", &s.marks);
        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        return 1;
    }

    while (fscanf(fp, "%s %d %d", s.name, &s.roll, &s.marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}
