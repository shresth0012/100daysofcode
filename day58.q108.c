
//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

int main() {
    int n, i, j, prod;
    int nums[100], answer[100];

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(i = 0; i < n; i++) {
        prod = 1;
        for(j = 0; j < n; j++) {
            if(i != j)
                prod *= nums[j];
        }
        answer[i] = prod;
    }

    printf("[");
    for(i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i != n-1) printf(",");
    }
    printf("]\n");

    return 0;
}
