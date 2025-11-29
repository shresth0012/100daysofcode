
//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, flag = 1;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    if(str1[strlen(str1)-1] == '\n') str1[strlen(str1)-1] = '\0';
    if(str2[strlen(str2)-1] == '\n') str2[strlen(str2)-1] = '\0';

    for(i = 0; str1[i] != '\0'; i++)
        freq1[str1[i]-'a']++;

    for(i = 0; str2[i] != '\0'; i++)
        freq2[str2[i]-'a']++;

    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
