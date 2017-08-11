#include <stdio.h>
struct point{
    int x, y;
};
typedef struct point point;
struct rectangle{
    point p1, p2;
};
typedef struct rectangle rectangle;
int main(){
    rectangle r, *rptr = &r;
    r.p1.x = 1;
    printf("%d\t", r.p1.x);
    (r.p1).x = 2;
    printf("%d\t", r.p1.x);
    (*rptr).p1.x = 3;
    printf("%d\t", r.p1.x);
    rptr -> p1.x = 4;
    printf("%d\t", r.p1.x);
    (rptr -> p1).x = 5;
    printf("%d", r.p1.x);
    return 0;
}
