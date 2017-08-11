/* Find the Reverse of a +ve Number */
#include <stdio.h>
void main(void) {
    int x;
    scanf("%d", &x);
    int newX = 0;
    while (x % 10) {
        newX = newX * 10 + (x % 10);
        x = x / 10;
    }
    printf("%d\n", newX);
}   
