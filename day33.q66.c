
//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, a[100], key, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] > key) {
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--) {
        a[i] = a[i-1];
    }

    a[pos] = key;
    n++;

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
