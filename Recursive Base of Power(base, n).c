#include <stdio.h>
int power(int base, int n);
int main(){
    printf("3^13 = %d\n", power(3, 13));
}
int power(int base, int n){
	int p;
	if(n == 1) return base;
	p = power(base, n/2);
	if(n%2 == 0) return p * p;
	else return p * p * base;
}
