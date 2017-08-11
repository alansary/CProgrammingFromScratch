/* Pointers and Arrays
 * The name of the array is a pointer to the first element of the array.
 * Arrays are constant pointers. We can not make the array name point
 * to other memory location rather than the first element in the array.
 * The name of the array is a CONSTANT with the value as the location of
 * the first element. You can not change the address where the array is
 * stored. An array's name is equivalent to a constant pointer.
 */
#include <stdio.h>
void main(void) {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("The address of the first element of the array is %p = %p\n", &a[0], a);
    int *aptr1 = a;
    int* aptr2 = &a[0];
    printf("The address of the first element of the array is %p = %p\n", aptr1, aptr2);
    printf("The first element of the array is %d = %d = %d = %d\n", *aptr1, *aptr2, a[0], *a);
    printf("The address of the second element of the array is %p = %p = %p = %p\n", (aptr1 + 1), (aptr2 + 1), (a + 1), (&a[0] + 1));
    printf("The second element of the array is %d = %d = %d = %d\n", *(aptr1 + 1), *(aptr2 + 1), *(a + 1), a[1]);
}
