//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("Sum=%d", n * (n + 1) / 2);
    return 0;
}

