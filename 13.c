/* Arrays are logicall collections of values of the same type, they are
 * sequentally indexed and reserver contiguous memory locations. They are
 * fixed in size. The name of the array is a pointer to the first element.
 */
#include <stdio.h>
#define MAXARRAY 10
#define ArrayEntry float
void main(void) {
    ArrayEntry temprature[MAXARRAY];
    float sum = 0.0, avg;
    for (int x = 0; x < MAXARRAY; x++) {
        scanf("%f", &temprature[x]);
        sum += temprature[x];
    }
    avg = sum / MAXARRAY;
    printf("{ ");
    for (int x = 0; x < MAXARRAY-1; x++) {
        printf("%f, ", temprature[x]);
    }
    printf("%f }\n", temprature[MAXARRAY-1]);
    printf("%f\n", avg);
}
