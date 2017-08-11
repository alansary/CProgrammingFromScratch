#include <stdio.h>
int main(){
    int a = 1025, *p = &a, **q = &p, ***r = &q;
    printf("Address of a is %d\nContent of a is %d\n", &a, a);
    printf("Address of p is %d\nContent of p is %d\n", &p, p);
    printf("Address of q is %d\nContent of q is %d\n", &q, q);
    printf("Address of r is %d\nContent of r is %d\n", &r, r);
    printf("a = %d = %d = %d = %d\n", a, *p, **q, ***r);
    printf("Address of a = %d = %d = %d = %d\n", &a, p, *q, **r);
    printf("p = %d = %d = %d\n", p, *q, **r);
    printf("Address of p = %d = %d = %d\n", &p, q, *r);
    printf("q = %d = %d\n", q, *r);
    printf("Address of q = %d = %d\n", &q, r);
    printf("r = %d\n", r);
    printf("Address of r = %d\n", &r);
    ***r = ((**q) * 2) - ((*p) * 2) + (***r) + 3 - **q;
    printf("a = %d\n", a);
    return 0;
}
