/* Find the reverse of a +ve Number */
#include <stdio.h>
void main(void) {
    int x;
    scanf("%d", &x);
    while (x % 10) {
        printf("%d", x % 10);
        x = x / 10;
    }
    printf("%s", "\n"); // Secure C
}
