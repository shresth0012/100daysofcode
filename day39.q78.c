
//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, i, j, a[100][100], sum = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if(i == j)
                sum += a[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}
