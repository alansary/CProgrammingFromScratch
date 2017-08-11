#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    int x, y, n, total = 0;
    printf("Enter the value of x: "); //Getting the value of x
    scanf("%d", &x);
    printf("Enter the value of y: "); //Getting the value of y
    scanf("%d", &y);
    printf("Enter the value of n: "); //Getting the value of n
    scanf("%d", &n);
    int k, j, factn = 1, factk = 1, factnk = 1, nck;
    for(j=1; j<=n; j++) //Calculating n!
        factn *= j;
    for(k=0; k<=n; k++){
        for(j=1; j<=k; j++) //Calculating k!
            factk *= j;
        for(j=1; j<=(n-k); j++) //Calculating (n-k)!
            factnk *= j;
        nck = factn/(factk * factnk); //Calculating nck
        total += nck * pow(x, n-k) * pow(y, k);
        factk = 1, factnk = 1;
    }
    printf("Result = %d\n", total);
    return 0;
}
