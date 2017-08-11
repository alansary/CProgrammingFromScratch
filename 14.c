/* Find the hottest day in the week */
#include <stdio.h>
#define MAXARRAY 7
#define ArrayEntry float
void main(void) {
    ArrayEntry temprature[MAXARRAY];
    float hottest = 0.0;
    for (int x = 0; x < MAXARRAY; x++) {
        scanf("%f", &temprature[x]);
        if (hottest < temprature[x])
            hottest = temprature[x];
    }
    printf("%s", "{ ");
    for (int x = 0; x < MAXARRAY -1; x++)
        printf("%f, ", temprature[MAXARRAY]);
    printf("%f }\n", temprature[MAXARRAY-1]);
    printf("%f\n", hottest);
}
