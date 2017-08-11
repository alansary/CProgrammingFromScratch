#include <stdio.h>
long int factorial(int n);
double permutation(int n, int r);
double combination(int n, int r);
int main(){
    printf("Enter n and r:\n");
    int n, r;
    scanf("%d%d", &n, &r);
    printf("%dp%d = %lf\n", n, r, permutation(n, r));
    printf("%dc%d = %lf\n", n, r, combination(n, r));
}
long int factorial(int n){
    if(n<=1)
        return n;
    else
        return (n * factorial(n-1));
}
double permutation(int n, int r){
    return factorial(n)/factorial(n-r);
}
double combination(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
