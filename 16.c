/* Multidimensional Arrays
 * 2-Dimensional arrays can be thought of as a matrix where a[i][j] is the
 * matrix m[i][j]
 * 3-Dimensional arrays can be thought of as a n m[i][j] matrix where
 * a[n][i][j] represents n m[i][j] matrices (n (i * j) planes)
 * Multidimensional arrays are stored in a row major order
 */
#include <stdio.h>
#define MAXROW 3
#define MAXCOLUMN 4
void main(void) {
    int entry;
    int m[MAXROW][MAXCOLUMN];
    //scanning values
    for (int r = 0; r < MAXROW; r++)
        for (int c = 0; c < MAXCOLUMN; c++) {
            printf("Element e%d%d: ", r, c);
            scanf("%d", &m[r][c]);
    }
    //printing values
    for (int r = 0; r < MAXROW; r++) {
        for (int c = 0; c < MAXCOLUMN; c++) {
            printf("%d  ", m[r][c]);
        }
        puts("");
    }
}
