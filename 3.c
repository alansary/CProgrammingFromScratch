/* Problem: Find the largest of 3 numbers */
#include <stdio.h>
void main(void) {
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if (x > y) {
        if (x > z) {
            printf("%d is the largest\n", x);
        }
        else {
            printf("%d is the largest\n", z);
        }
    }
    else {
        if (y > z) {
            printf("%d is the largest\n", y);
        }
        else {
            printf("%d is the largest\n", z);
        }
    }
}
