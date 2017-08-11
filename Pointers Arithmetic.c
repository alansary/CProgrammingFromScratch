#include <stdio.h>
int main(){
    int x = 10, *xptr = &x;
    printf("Address of x = %i = %i\n", &x, xptr);
    xptr++;
    printf("Address of x = %i\txptr now points to address %i\n", &x, xptr);
    printf("Address of x + sizeof(int) = %i + %d = %i\n", &x, sizeof(int), xptr);
    int y = 10;
    xptr += y;
    printf("xptr now points to %i\n", xptr);
    printf("Address of x + sizeof(int) + (y = %d) * sizeof(int) = %i + %d + %d * %d = %i\n", y, &x, sizeof(int), y, sizeof(int), xptr);
    char c = 'a', *cptr = &c;
    printf("size = %d\t&c = %i\cptr = %i\t&cptr = %i\n", sizeof(cptr), &c, cptr, &cptr);
    cptr++;
    printf("cptr++ = %i\n", cptr);
    return 0;
}
