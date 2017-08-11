/* Find the nth triangular number (The sum of integers from 1 to n) */
#include <stdio.h>
void main(void) {
    int n, sum = 0;
    for (int x = 1; x <= 5; x++, sum = 0) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            sum += i;
        printf("%d\n", sum);
    }
}
