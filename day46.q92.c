
//Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}, i;
    char ch;
    int found = 0;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        ch = str[i];
        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if(freq[ch - 'a'] == 2) {
                printf("%c\n", ch);
                found = 1;
                break;
            }
        }
    }

    if(!found)
        printf("No repeating lowercase alphabet\n");

    return 0;
}
