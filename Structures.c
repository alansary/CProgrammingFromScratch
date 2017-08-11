#include <stdio.h>
struct point{
    int x;
    int y;
}point1, point2;
struct studentInfo{
    int ID;
    int age;
    char gender;
    double GPA;
};
struct date{
    int day;
    int month;
    int year;
};
struct bankAccount{
    char name[15];
    int accountNo;
    double balance;
    struct date Birthday;
};
struct rectangle{
    struct point pt1;
    struct point pt2;
}rect1;
int main(){
    struct point point3, point4;
    struct point point5 = {7, 5};
    point1.x = 3; point1.y = 2;
    point2.x = 4; point2.y = 4;
    printf("Enter the coordinates of point3:\n");
    scanf("%d%d", &point3.x, &point3.y);
    printf("Enter the coordinates of point4:\n");
    scanf("%d%d", &point4.x, &point4.y);
    printf("point1\n\tx = %d\n\ty = %d\npoint2\n\tx = %d\n\ty = %d\n", point1.x, point1.y, point2.x, point2.y);
    rect1.pt1.x = 5; rect1.pt1.y = 10;
    rect1.pt2.x = 7; rect1.pt2.y = 12;
    return 0;
}
