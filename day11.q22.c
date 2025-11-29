// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float CP, SP, result;
    scanf("%f %f", &CP, &SP);
    if (SP > CP) {
        result = ((SP - CP) / CP) * 100;
        printf("Profit %.0f%%", result);
    } else if (SP < CP) {
        result = ((CP - SP) / CP) * 100;
        printf("Loss %.0f%%", result);
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}
