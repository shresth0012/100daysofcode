
//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int maxEndingHere, maxSoFar;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    maxEndingHere = maxSoFar = arr[0];

    for(i = 1; i < n; i++) {
        if(maxEndingHere + arr[i] > arr[i])
            maxEndingHere = maxEndingHere + arr[i];
        else
            maxEndingHere = arr[i];

        if(maxEndingHere > maxSoFar)
            maxSoFar = maxEndingHere;
    }

    printf("%d\n", maxSoFar);

    return 0;
}
