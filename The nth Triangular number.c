#include <stdio.h>
void triangularNumber(int n); //Function to calculate the nth triangular number
int main(){
    int a = 10;
    const int b = 20;
    triangularNumber(a); //Actual Argument
    triangularNumber(b); //Actual Argument
    triangularNumber(a+b); //Actual Argument
    triangularNumber(40); //Actual Argument
    return 0;
}
void triangularNumber(int n){ //Formal Arguments
    int triangularN = 0, i; //Local Variables
    for(i=1; i<=n; i++)
        triangularN += i;
    printf("Triangular number %d is %d\n", n, triangularN);
}
