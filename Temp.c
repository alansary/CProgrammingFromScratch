#include <stdio.h>
int main(){
    int x = 5, *xptr = &x;
    printf("x = %d\t&x = %i\txptr = %i\t&xptr = %i\t*xptr = %d\n", x, &x, xptr, &xptr, *xptr);
    return 0;
}
