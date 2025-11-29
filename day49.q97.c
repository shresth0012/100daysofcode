
//Q97: Print the initials of a name.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);
    if(str[strlen(str)-1]=='\n') str[strlen(str)-1]='\0';

    if(str[0] != ' ')
        printf("%c.", str[0]);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            printf("%c.", str[i+1]);
    }

    printf("\n");

    return 0;
}
