// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, num, first, last, digits, pow10;
    scanf("%d", &n);
    num = n;
    last = n % 10;
    digits = (int)log10(n);
    pow10 = (int)pow(10, digits);
    first = n / pow10;
    n = n % pow10; 
    n = n - n % 10 + first; 
    n = n + last * pow10; 
    printf("%d", n);
    return 0;
}
