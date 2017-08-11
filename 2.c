/* Problem: Find the largest of 3 numbers */
#include <stdio.h>
void main(void) {
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    int largest = (x > y) ? ((x > z) ? x : z ): ((y > z) ? y : z);
    printf("%d\n", largest);
}
