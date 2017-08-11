/* Using arrays as counters */
#include <stdio.h>
void main(void) {
    int ratings[10];
    int counter[6];
    int checkValidity;
    // Intializing the counter
    for (int x = 1; x < 6; x++)
        counter[x] = 0;
    // Scanning the values and accumulating the count
    for (int x = 0; x < 10; x++) {
        scanf("%d", &checkValidity);
        if (checkValidity >= 1 && checkValidity <= 5)
            ratings[x] = checkValidity;
        else {
            ratings[x] = 0;
            printf("%s", "Wrong rating!\n");
        }
        counter[ratings[x]]++;
    }
    // Printing the ratings
    printf("%s", "{ ");
    for (int x = 0; x < 9; x++)
        printf("%d, ", ratings[x]);
    printf(" %d }\n", ratings[9]);
    // Printing the count of the ratings
    printf("%s", "{ ");
    for (int x = 1; x < 5; x++)
        printf("%d, ", counter[x]);
    printf(" %d }\n", counter[5]);
}
