
//Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, a[100], key, found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

    return 0;
}
