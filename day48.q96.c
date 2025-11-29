
//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start, end;

    fgets(str, sizeof(str), stdin);
    if(str[strlen(str)-1]=='\n') str[strlen(str)-1]='\0';

    i = 0;
    while(str[i] != '\0') {
        start = i;
        while(str[i] != ' ' && str[i] != '\0') i++;
        end = i - 1;

        while(start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }

        if(str[i] == ' ') i++;
    }

    printf("%s\n", str);

    return 0;
}
