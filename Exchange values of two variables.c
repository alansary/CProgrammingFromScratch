#include <stdio.h>
void exchangeValues(int *a, int *b);
int main(){
    int x = 5, y = 10;
    printf("Before calling the swap function:\nx = %d\ty= %d\n", x, y);
    exchangeValues(&x, &y);
    printf("After calling the swap function:\nx = %d\ty = %d\n", x, y);
    return 0;
}
void exchangeValues(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
