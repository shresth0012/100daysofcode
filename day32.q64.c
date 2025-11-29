
//Q64: Find the digit that occurs the most times in an integer number.

    #include <stdio.h>

int main() {
    long long n;
    int digit, freq[10] = {0}, i, max = 0, result = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while(n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            result = i;
        }
    }

    printf("%d\n", result);

    return 0;
}
