/* Accessing Arrays with Pointers */
/* The sizeof operator returns the size of any type in bytes */
/* Note that: the type of struct is increased 4 bytes by 4 bytes according
 * to the types within it except when it contains only one variable, it will
 * have size equal to the variable's size.
 */
/* Valid pointer operations:
 *     - Assignment between pointers of the same type.
 *     - Addition/subtraction between a pointer and an integer.
 *     - Comparison between two pointers that point to elements of the same
 *       array.
 *     - Subraction between two pointers that point to elements of the same
 *       array.
 *     - Assignment or comparison with zero (NULL).
 */
/*
 * Increment/decrement: if p is a pointer to type T, p++ increases the value
 * of p by sizeof(T) (sizeof(T) is the amount of storage needed for an
 * object of type T). Similarly, p-- decreases p by sizeof(T);
 */
/*
 * Addition/subtraction with an integer: if p is a pointer to type T and n
 * an integer, p + n increases the value of p by n * sizeof(T).
 */
/*
 * If p and q point to members of the same array, then relations like
 * ==, !=, <, >=, etc., work properly.
 * For example, p < q is true if p points to an earlier element of the array
 * than q does.
 * Any pointer can be meaningfully compared for equality or inequality with
 * zero (NULL).
 */
/*
 * Pointer Subtraction
 */
#include <stdio.h>
typedef struct x{
    int i;
    char c1, c2, c3, c4, c5;
}X;
/* strlen: return length of string s */
int strLen(char *s) {
    char *p = s;
    while (*p != '\0')
        p++;
    return p - s;
}
void main(void) {
    char *line = "This is the first line";
    printf("%d\n", strLen(line));
    int myArray[] = {1, 23, 17, 4, -5, 100}, *ptr, i;
    ptr = &myArray[0];
    int *ptr2 = &myArray[1];
    if (ptr < ptr2) printf("Yeeeeah\n"); //comparing pointers
    for (i = 0; i < 6; i++) {
        printf("myArray[%d] = %d ", i, myArray[i]);
        printf("Contents in address ptr + %d = %d\n", i, *ptr++);
    }
    printf("The size of int is %d\n", sizeof(int));
    printf("The size of long int is %d\n", sizeof(long int));
    printf("The size of long long int is %d\n", sizeof(long long int));
    printf("The size of float is %d\n", sizeof(float));
    printf("The size of double is %d\n", sizeof(double));
    printf("The size of char is %d\n", sizeof(char));
    printf("The size of a struct that contains int and char is %d\n", sizeof(X));
}
