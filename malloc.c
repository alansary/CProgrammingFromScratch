#include <stdio.h>
struct date{
    int day, month, year;
};
typedef struct date date;
date *createDate(int day, int month, int year);
int main(){
    date *d = createDate(10, 1, 1993);
    printf("%d/%d/%d", d->day, d->month, d->year);
    return 0;
}
date* createDate(int day, int month, int year){
    date *d;
    d = malloc(sizeof(date));
    d -> day = day;
    d -> month = month;
    d -> year = year;
    return d; //Returining a pointer to a reserved space
}
