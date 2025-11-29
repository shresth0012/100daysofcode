
//Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, spaces = 0, digits = 0, special = 0;
    char ch;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n') {
        ch = str[i];
        if(ch == ' ')
            spaces++;
        else if(ch >= '0' && ch <= '9')
            digits++;
        else
            special++;
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}
