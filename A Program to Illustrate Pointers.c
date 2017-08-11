#include <stdio.h>
int main(){
    int x = 10;
    int *xp; //int* xp; which is a pointer to integer
    xp = &x; //xp points to x
    printf("x = %d\t&x = %p\txp = %p\t&xp = %p\t*xp = %d\n", x, &x, xp, &xp, *xp);
    //%p is used to print pointer data typed "Format specifier for an address"
    *xp = 20; //Content xp is now changed to 20 -> Dereferencing (Getting the value of r-value)
    printf("x = %d\t&x = %p\txp = %p\t&xp = %p\t*xp = %d\n", x, &x, xp, &xp, *xp);
    int y = 30;
    xp = &y; //xp is now pointing to y
    printf("x = %d\t&x = %p\txp = %p\t&xp = %p\ty = %d\t&y = %p\t*xp = %d\n", x, &x, xp, &xp, y, &y, *xp);
    *xp = 40; //Content xp is now changed to 40
    printf("x = %d\t&x = %p\txp = %p\t&xp = %p\ty = %d\t&y = %p\t*xp = %d\n", x, &x, xp, &xp, y, &y, *xp);
    printf("%d\n", sizeof(int));
}
