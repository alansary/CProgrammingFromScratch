/* If (m > n), then GCD(m, n) = GCD(n, m%n)
       Called the Euclid's algorithm
*/
#include <stdio.h>

int GCD(int m, int n);

void main(void) {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", GCD(x, y));
}

int GCD(int m, int n) {
    if (m < n) { // Swapping the values
        int temp = m;
        m = n;
        n = temp;
    }
    int temp;
    while (n != 0) {
        temp = m % n;
        m = n;
        n = temp;
    }
    /*
        GCD(43, 13)         GCD(96, 28)
        43 % 13 = 4         96 % 28 = 12
        13 % 4 = 1          28 % 12 = 4
        4 % 1 = 0           12 % 4 = 0
        1 is the GCD        4 is the GCD
    */
    return m;
}
