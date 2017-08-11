#include <stdio.h>
struct point{
    int x, y;
}P;
struct line{
    struct point p1, p2;
}L;
struct triangle{
    struct point p1, p2, p3;
}T;
int main(){
    P.x = 2;
    P.y = 5;
    L.p1.x = 1;
    L.p1.y = 3;
    L.p2.x = 4;
    L.p2.y = 4;
    T.p1.x = 1;
    T.p1.y = 0;
    T.p2.x = 3;
    T.p2.y = 2;
    T.p3.x = 4;
    T.p3.y = 1;
    return 0;
}
