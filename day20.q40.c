//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    char bin[33];
    scanf("%s", bin);
    for (int i = 0; bin[i] != '\0'; i++) {
        if (bin[i] == '0')
            printf("1");
        else if (bin[i] == '1')
            printf("0");
    }
    return 0;
}
