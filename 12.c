/* Input Numbers of a Specific Kind */
#include <stdio.h>
void main(void) {
    // Ask the suer for a number that is positive and not a multiple of 3
    int x;
    do {
        scanf("%d", &x);
    } while ((x <= 0) || (x % 3 == 0));
    // while (!((x > 0) && (x % 3 != 0)));
}
