#include <stdio.h>
#define SIZE 500000
int main(){
    long int Primes[SIZE], PrimeIndex, p, i, IsPrime;
    Primes[0] = 2; //First prime is 2
    Primes[1] = 3; //Second Prime is 3
    PrimeIndex = 2;
    for(p=5; p<=SIZE; p += 2){ //From the third prime, we grantee that it is odd since it is not divisible by 2
        IsPrime = 1; //Assume that it is a prime
        for(i=1; i<PrimeIndex; i++){ //Odd numbers are not divisible by 2
            //We do not have to check it for all numbers, we have to check it for only prime numbers
            if(Primes[i] <= sqrt(p)){ //Check only to the square root of p
                if(p % Primes[i] == 0){
                    IsPrime = 0; //p is divisible by some prime i, then p is not prime
                    break;
                }
            }
            else
                break; //Primes[i] > sqrt(p)
        }
        if(IsPrime == 1){ //Add a prime into the Primes array
            Primes[PrimeIndex] = p;
            ++PrimeIndex;
        }
    }
    for(i=0; i<PrimeIndex; i++){ //Print Primes
        printf("%ld ", Primes[i]);
    }
}
