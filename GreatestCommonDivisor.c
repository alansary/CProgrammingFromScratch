/* GCD of Two +ve Numbers
   Idea: if (m > n) gcd(m, n) = gcd(n, m%n)
       Called the Euclid's algorithm (around 300 B.C.E)
*/
#include <stdio.h>
int GCD(int x, int y);
void main(void) {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", GCD(x, y));
}
int GCD(int x, int y) {
    if (x < y) { // Swapping the values (x is always > y)
        int temp = x;
        x = y;
        y = temp;
    }
    int val;
    while (x % y) { // while x % y != 0
        if (! x % y == 0) {
            val = x % y;
            // The wrong code is:
            // y = val;
            // x = y;
            x = y;
            y = val;
        }
        else
            break;
    }
    return val;
}
