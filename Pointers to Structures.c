#include <stdio.h>
struct point{
    int x, y;
};
typedef struct point point;
void printStruct(point p, point *pptr, int i);
int main(){
    point p1 = {1, 2}, p2 = {3, 4};
    point *pptr1 = &p1, *pptr2 = &p2;
    printf("sizeof(int) = %d\tsizeof(p1) = %d = sizeof(p2) = %d\tsizeof(pptr) = %d\n", sizeof(int), sizeof(p1), sizeof(p2), sizeof(pptr1));
    printf("p1.x = %d\tp1.y = %d\t&p1 = %i\tpptr1 = %i\t&pptr1 = %i\n", p1.x, p1.y, &p1, pptr1, &pptr1);
    printStruct(p1, pptr1, 1);
    printf("p2.x = %d\tp2.y = %d\t&p2 = %i\tpptr2 = %i\t&pptr2 = %i\n", p2.x, p2.y, &p2, pptr2, &pptr2);
    printStruct(p2, pptr2, 2);
    (*pptr1).x = 3; //Parenthesis are necessary
    (*pptr1).y = 4;
    (*pptr2).x = 1;
    (*pptr2).y = 2;
    printf("p1.x = %d\tp1.y = %d\t&p1 = %i\tpptr1 = %i\t&pptr1 = %i\n", p1.x, p1.y, &p1, pptr1, &pptr1);
    printStruct(p1, pptr1, 1);
    printf("p2.x = %d\tp2.y = %d\t&p2 = %i\tpptr2 = %i\t&pptr2 = %i\n", p2.x, p2.y, &p2, pptr2, &pptr2);
    printStruct(p2, pptr2, 2);
    pptr1 -> x = 1; //Equivalent short form
    pptr1 -> y = 2;
    pptr2 -> x = 3;
    pptr2 -> y = 4;
    printf("p1.x = %d\tp1.y = %d\t&p1 = %i\tpptr1 = %i\t&pptr1 = %i\n", p1.x, p1.y, &p1, pptr1, &pptr1);
    printStruct(p1, pptr1, 1);
    printf("p2.x = %d\tp2.y = %d\t&p2 = %i\tpptr2 = %i\t&pptr2 = %i\n", p2.x, p2.y, &p2, pptr2, &pptr2);
    printStruct(p2, pptr2, 2);
    return 0;
}
void printStruct(point p, point *pptr, int i){
    printf("p%d.x = %d\tp%d.y = %d\t&p%d = %i\tpptr%d = %i\t&pptr%d = %i\n", i, p.x, i, p.y, i, &p, i, pptr, i, &pptr);
    //Notice: p and pptr are formal parameters that pushed into stack temporarily
    //however the content of pptr which is the address of the structure it points to is not changed
}
