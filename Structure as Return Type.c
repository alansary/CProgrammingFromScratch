#include <stdio.h>
struct point{
    int x, y;
};
typedef struct point point;
point makePoint(int x, int y){
    point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}
int main(){
    point p = makePoint(5, 12);
    printf("p(x, y) = p(%d, %d)", p.x, p.y);
    return 0;
}
