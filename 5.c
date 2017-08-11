/* Example 1: No else clause
   Given a number, find out if it is a multiple of 3
*/
#include <stdio.h>
void main(void) {
    int x;
    scanf("%d", &x);
    if (x % 3 == 0) {
        printf("x is a multiple of 3\n");
    }
}
