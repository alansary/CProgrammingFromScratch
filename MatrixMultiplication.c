/* Matrix Multiplication */
/*
 * Let a[i][j] be an i*j matrix and b[j][x] be an j*x matrix, then the
 * matrix m[i][x] is an i*x matrix which is the result of multiplication of
 * the arrays a and b.
 * The ixth element in m[i][x] is the cross product of the ith row in a
 * and the xth column in b.
 */
#include <stdio.h>
void main(void) {
    //scanning the dimensions of the two arrays
    int arows, brows, acols, bcols;
    printf("%s", "The number of rows of the first array: ");
    scanf("%d", &arows);
    printf("%s", "The number of columns of the first array: ");
    scanf("%d", &acols);
    do {
        printf("%s", "The number of rows of the second array: ");
        scanf("%d", &brows);
    }while(acols != brows);
    printf("%s", "The number of columns of the second array: ");
    scanf("%d", &bcols);
    int a[arows][acols];
    //scanning the values of the first array
    puts("Enter the values of the first array:");
    for (int x = 0; x < arows; x++)
        for (int y = 0; y < acols; y++) {
            printf("Element a%d%d: ", x, y);
            scanf("%d", &a[x][y]);
        }
    int b[brows][bcols];
    //scanning the values of the second array
    puts("Enter the values of the second array:");
    for (int x = 0; x < brows; x++)
        for (int y = 0; y < bcols; y++) {
            printf("Element b%d%d: ", x, y);
            scanf("%d", &b[x][y]);
        }
    //initializing the array m (the result of multiplicatoin)
    //multiplying a and b and storing the result in m
    int m[arows][bcols];
    for (int x = 0; x < arows; x++)
        for (int y = 0; y < bcols; y++) {
            m[x][y] = 0;
            for (int z = 0; z < acols; z++)
                m[x][y] += a[x][z] * b[z][y];
        }
    //printing the result
    for (int x = 0; x < arows; x++) {
        for (int y = 0; y < bcols; y++)
            printf("%8d", m[x][y]);
        puts("");
    }
}
