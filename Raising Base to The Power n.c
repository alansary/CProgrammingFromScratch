#include <stdio.h>
long int power(int b, int n); //Takes an integer base b and another positive integer n and produces base rased to power n
int main(){
    long int result1 = power(3, 5), result2 = power(-4, 3);
    printf("3^5 = %ld\t-4^3 = %d\n", result1, result2);
}
long int power(int b, int n){
    int p = 1, i;
    for(i=1; i<=n; i++)
        p *= b;
    return p;
}
