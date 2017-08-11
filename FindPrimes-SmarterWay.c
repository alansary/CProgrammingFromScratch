/* Finding All Prime Numbers <= N */
/*
 * Observations:
 *     - 2 is the only even prime number
 *     - 3 is the smallest odd prime number
 *     - To find out if a number p is prime or not, it is enough to check if
 *       p is divisible by all primes less than p
 *       - If some prime number i < p divides p, then p is composite
 *       - If there is no i such that i divides p fully, then p is prime
 */
/*
 * - We know that 2 and 3 are primes
 * - Also we know that all even numbers except 2 are not primes since they
 *   they are divisible by 2 (2 is a factor of each even number)
 * - Let's check 5
 *   5 is not divisible by 2 (remainder = 1)
 *   5 is not divisible by 3 (remainder = 2)
 *   5 is not divisible by 4 (remainder = 1)
 *   - We know that 4 is 2 * 2; that is, if there is a number that is
 *     is divisible by 4 then this number is divisible by 2 which is a
 *     factor of 4. Therefore, we don't have to check if the number is
 *     divisible by 4 if we checked it for 2
 * - Let's check 7
 *   6 have 2 and 3 as factors, we don't have to check 7 for divisibility
 *   by 6. Same argument will hold for 4. We will check for 2, 3 and 5 only
 * - Conclusion:
 *   We will only check for the prime numbers that are less than the
 *   number.
 */
/*
 * We can make the program more efficient
 *     - Check only till sqrt(N)
 *     - If p is divisible by some prime number, the loop still runs till
 *       all prime numbers less than it are check (Use break)
 */
#include <stdio.h>
#include <math.h>
#define N 1000000
void main(void) {
    int p, i, primes[N], primeIndex;
    int isPrime;
    primes[0] = 2; //the only even prime number
    primes[1] = 3; //the smallest odd prime number
    primeIndex = 2;
    for (p = 5; p <= N; p += 2) { //iterate over all odd numbers <= N
        isPrime = 1; //assume that it is prime
        for (i = 1; i < primeIndex; i++) { //loop through previous primes
        //except two since no even coming numbers
            if (primes[primeIndex] > sqrt(N)) break;
            //check only till sqrt(N)
            //if p is divisible by some prime i, then p is not prime
            if (p % primes[i] == 0)
                isPrime = 0;
                break; //break the loop if p is not a prime
        }
        if (isPrime == 1) {
            primes[primeIndex] = p; //add the prime number in the array
            ++primeIndex; //increment the primes's array index
        }
    }
    //print out all the primes
    for (i = 0; i < primeIndex; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");
}
