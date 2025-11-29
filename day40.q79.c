//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int d = 0; d < r + c - 1; d++) {
        int rowStart = d < c ? 0 : d - c + 1;
        int rowEnd = d < r ? d : r - 1;

        if (d % 2 == 0) {
            for (int i = rowEnd; i >= rowStart; i--) {
                int j = d - i;
                if (j >= 0 && j < c) printf("%d ", a[i][j]);
            }
        } else {
            for (int i = rowStart; i <= rowEnd; i++) {
                int j = d - i;
                if (j >= 0 && j < c) printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}

