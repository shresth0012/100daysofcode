//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    float r;
    scanf("%f", &r);
    float pi = 3.1416;
    printf("Area=%.2f, Circumference=%.2f", pi*r*r, 2*pi*r);
    return 0;
}
