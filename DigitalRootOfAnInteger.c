/* Digital Root of an integer is the summation of its digits iteratively
   till we hit one decimal digit.
*/
#include <stdio.h>
void main(void) {
    int x;
    scanf("%d", &x);
    int digitalRoot = 0;
    while (x > 9) {
        digitalRoot = 0; // Re-initialize dR (Accumulator)
        while (x > 0) {
            digitalRoot += x % 10;
            x = x / 10;
        }
        x = digitalRoot; // Enter the loop again with x is dR
    }
    printf("%d\n", digitalRoot);
}
