
//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int m, n, i, j, a[100][100], rowSum[100];

    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++) {
        rowSum[i] = 0;
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }

    for(i = 0; i < m; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
