//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int maxLen = 0, start = 0, maxStart = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            start++;
        } else {
            if (start > maxLen) {
                maxLen = start;
                maxStart = i - start;
            }
            start = 0;
        }
    }
    if (start > maxLen) {
        maxLen = start;
        maxStart = strlen(str) - start;
    }

    for (int i = 0; i < maxLen; i++)
        printf("%c", str[maxStart + i]);

    return 0;
}
