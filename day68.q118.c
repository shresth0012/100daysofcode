
//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n, i, sum = 0, total, num;
    int arr[100];

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;
    printf("%d\n", total - sum);

    return 0;
}
