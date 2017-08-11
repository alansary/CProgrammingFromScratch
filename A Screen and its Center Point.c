#include <stdio.h>7
struct point{
    int x, y;
};
typedef struct point point;
struct rectangle{
    point p1, p2;
};
typedef struct rectangle rectangle;
point makePoint(int, int);
int main(){
    rectangle screen;
    point middle;
    screen.p1 = makePoint(0, 0);
    screen.p2 = makePoint(1920, 1080);
    middle = makePoint((screen.p1.x+screen.p2.x)/2, (screen.p1.y+screen.p2.y)/2);
    printf("p1(%d, %d)\tp2(%d, %d)\nmiddle(%d, %d)", screen.p1.x, screen.p1.y, screen.p2.x, screen.p2.y, middle.x, middle.y);
    return 0;
}
point makePoint(int x, int y){
    point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}
