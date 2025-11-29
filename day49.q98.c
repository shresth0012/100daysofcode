
//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, lastSpace = -1;

    fgets(str, sizeof(str), stdin);
    if(str[strlen(str)-1]=='\n') str[strlen(str)-1]='\0';

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') lastSpace = i;
    }

    if(lastSpace == -1) {
        printf("%s\n", str);
        return 0;
    }

    if(str[0] != ' ')
        printf("%c.", str[0]);

    for(i = 0; i < lastSpace; i++) {
        if(str[i] == ' ' && str[i+1] != ' ' && i+1 < lastSpace)
            printf("%c.", str[i+1]);
    }

    printf(" %s\n", &str[lastSpace+1]);

    return 0;
}
