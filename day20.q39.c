//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int n, digit, product = 1, has_odd = 0;
    scanf("%d", &n);
    while (n != 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        n /= 10;
    }
    if (!has_odd) product = 1;
    printf("%d", product);
    return 0;
}
