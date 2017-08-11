#include <stdio.h>
#define N 45
int main(){
    long int Fib[N], i;
    Fib[0] = 1;
    Fib[1] = 1;
    for(i = 2; i<N; i++){
        Fib[i] = Fib[i-1] + Fib[i-2];
    }
    for(i=0; i<N; i++){
        printf("%ld ", Fib[i]);
    }
}
