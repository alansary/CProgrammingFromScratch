#include <stdio.h>
struct point{
    int x, y;
};
typedef struct point point;
int IsOrigin(point p);
int main(){
    point p, p0;
    p.x = 5;
    p.y = 12;
    p0.x = 0;
    p0.y = 0;
    if(IsOrigin(p))
        printf("p(%d, %d) is the origin\n", p.x, p.y);
    else
        printf("p(%d, %d) is not the origin\n", p.x, p.y);
    if(IsOrigin(p0))
        printf("p0(%d, %d) is the origin\n", p0.x, p0.y);
    else
        printf("p0(%d, %d) is not the origin\n", p0.x, p0.y);
    return 0;
}
int IsOrigin(point p){
    if(p.x == 0 && p.y == 0)
        return 1;
    else
        return 0;
}
