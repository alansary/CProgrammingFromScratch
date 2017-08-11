/* Generate First N Fibonacci numbers */
#include <stdio.h>
#define MAXFIB 93
void main(void) {
    long long int fibonacci[MAXFIB];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int x = 2; x < MAXFIB; x++)
        fibonacci[x] = fibonacci[x-1] + fibonacci[x-2];
    for (int x = 0; x < MAXFIB; x++)
        printf("Fibonacci %3d: %20lld\n", x, fibonacci[x]);
}
