// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 

#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
        printf("Grade A");
    else if (marks >= 80 && marks <= 89)
        printf("Grade B");
    else if (marks >= 70 && marks <= 79)
        printf("Grade C");
    else if (marks >= 60 && marks <= 69)
        printf("Grade D");
    else
        printf("Grade F");
    return 0;
}
