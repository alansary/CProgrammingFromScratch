/* Find Primes
 * Observations:
 *     - 2 is the only even prime number
 *     - 3 is the smallest odd prime number
 *     - To find out if a number p is prime or not, it is enough to check if
 *       p is divisible by all primes less than p
 *       - If some prime number i < p divides p, then p is composite
 *       - If there is no i such that i divides p fully, then p is prime
 */
#include <stdio.h>
void main(void) {
    int number, sentinel;
    scanf("%d", &number);
    if (number < 1)
        printf("Enter a positive number\n");
    else
        for (int x = 1; x <= number; x++) {
            sentinel = 1;
            if (x == 1) {
                printf("One is special (It is not a prime)\n");
                sentinel = 0;
            }
            else
                for (int y = 2; y < x; y++)
                    if (x % y == 0) {
                        printf("%d is not a prime\n", x);
                        sentinel = 0;
                        break;
                    }
            if (sentinel) {
                printf("%d is a prime\n", x);
            }
        }
}
