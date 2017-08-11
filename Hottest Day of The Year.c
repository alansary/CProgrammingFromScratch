#include <stdio.h>
#define YEAR 365
int main(){
    //Average temperature of the year
    float temp[YEAR];
    float sum = 0.0, average = 0.0;
    int i;
    for(i=0; i<YEAR; i++){ //Get the temperatures of the year
        printf("Enter the temperature of day %d:\t", i+1);
        scanf("%f", &temp[i]);
    }
    for(i=0; i<YEAR; i++){ //Sum the temperatures of the year
        sum += temp[i];
    }
    average = sum/YEAR;
    //Finding the hottest day
    float max;
    int hottestDay = 0;
    max = temp[hottestDay];
    for(i=1; i<YEAR; i++){
        if(max < temp[i]){
            hottestDay = i;
            max = temp[i];
        }
    }
    printf("The hottest day was day %d with temperature %f", hottestDay, max);
}
