#include <stdio.h>
struct point{
    int x, y;
}pointArray1[] = {{1, 2}, {2, 3}, {3, 4}};
typedef struct point point;
point makePoint(int a, int b);
int main(){
    point pointArray2[10];
    pointArray2[0].x = 1;
    pointArray2[0].y = 2;
    pointArray2[1] =  makePoint(3, 4);
    int i;
    for(i=2; i<10; i++){
        printf("Enter the coordinates of the point %d:\n", i+1);
        scanf("%d%d", &pointArray2[i].x, &pointArray2[i].y);
    }
    printf("Points are:\n");
    for(i=0; i<10; i++)
        printf("\t\tpoint p%d(%d, %d)\n", i+1, pointArray2[i].x, pointArray2[i].y);
    return 0;
}
point makePoint(int a, int b){
    point temp;
    temp.x = a;
    temp.y = b;
    return temp;
}
