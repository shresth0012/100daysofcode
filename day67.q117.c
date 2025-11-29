
//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.


#include <stdio.h>

int main() {
    int m, n, i = 0, j = 0, k = 0;
    int nums1[100], nums2[100], merged[200];

    scanf("%d", &m);
    for(i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    i = 0; j = 0; k = 0;
    while(i < m && j < n) {
        if(nums1[i] <= nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    while(i < m)
        merged[k++] = nums1[i++];
    while(j < n)
        merged[k++] = nums2[j++];

    for(i = 0; i < k; i++) {
        printf("%d", merged[i]);
        if(i != k-1) printf(" ");
    }
    printf("\n");

    return 0;
}
