// Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int k;
    scanf("%d", &k);
    k = k % n;

    int result[n];
    for (int i = 0; i < n; i++)
        result[(i + k) % n] = a[i];

    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}
