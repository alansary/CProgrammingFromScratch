#include <stdio.h>
struct point{
    int x, y;
};
typedef struct point point;
struct rectangle{
    point p1, p2; //p1 is the left bottom coordinate and p2 is the right top corredinate
};
typedef struct rectangle rectangle;
point makePoint(int x, int y);
int isPtInRect(point p, rectangle r);
void printResult(int x, point p, rectangle r);
int main(){
    point p1 = makePoint(5, 12);
    point p2 = makePoint(3, 8);
    point p3 = makePoint(9, 15);
    point p4 = makePoint(8, 14);
    rectangle r;
    r.p1 = makePoint(4, 10);
    r.p2 = makePoint(8, 14);
    printResult(isPtInRect(p1, r), p1, r);
    printResult(isPtInRect(p2, r), p2, r);
    printResult(isPtInRect(p3, r), p3, r);
    printResult(isPtInRect(p4, r), p4, r);
    return 0;
}
point makePoint(int x, int y){
    point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}
int isPtInRect(point p, rectangle r){
    return(p.x >= r.p1.x && p.x <= r.p2.x && p.y >= r.p1.y && p.y <= r.p2.y);
}
void printResult(int x, point p, rectangle r){
    if(x)
        printf("The point (%d, %d) is in the rectangle with p1(%d, %d) and p2(%d, %d)\n", p.x, p.y, r.p1.x, r.p1.y, r.p2.x, r.p2.y);
    else
        printf("The point (%d, %d) is not in the rectangle with p1(%d, %d) and p2(%d, %d)\n", p.x, p.y, r.p1.x, r.p1.y, r.p2.x, r.p2.y);
}
