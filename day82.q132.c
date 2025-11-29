
//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>
#include <string.h>

enum Traffic { RED, YELLOW, GREEN };

int main() {
    char input[20];
    enum Traffic light;

    scanf("%s", input);

    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else
        light = GREEN;

    if (light == RED)
        printf("Stop");
    else if (light == YELLOW)
        printf("Wait");
    else
        printf("Go");

    return 0;
}
