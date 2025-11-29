//: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int a, b, x, y, temp;
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    printf("%d", x);
    return 0;
}
