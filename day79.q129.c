
//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    float sum = 0, avg;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0)
        avg = sum / count;
    else
        avg = 0;

    printf("Sum = %.0f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
