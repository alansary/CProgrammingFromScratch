/* A pointer of type t is a variable of type *t that holds the address of
 * another variable of type t.
 * A variable is a name of a memory location that can hold one value at a
 * time but a pointer to this variable contains the address of a memory
 * location that contains the actual value.
 * l-value and r-value
 *     - Given a variable k
 *     - Its l-value refers to the address of the memory location
 *       - l-value is used on the left hand side of an assignment
 *           k = expression
 *     - Its r-value referes to the value stored in the memory locatoin
 *       - r-value is used in the right hand side of an assignment
 *           var = k + ...
 *     - Pointers allow one to manipulate the l-value!
 * we use %p format specifiers to print addresses.
 * *ptr dereferences the pointer to get the r-value.
 * A NULL pointer is a special pointer value that is known not to point
 * anywhere.
 * A void pointer is a generic pointer, typecasting can be used to convert
 * from one type of pointer to another under the proper circumstances.
 */
#include <stdio.h>
void main(void) {
    int a = 10, b = 5;
    int *aptr = NULL;
    aptr = &a;
    printf("a = %d, &a = %p, aptr = %p, *aptr = %d\n", a, &a, aptr, *aptr);
    *aptr = 4;
    printf("a = %d, &a = %p, aptr = %p, *aptr = %d, &aptr = %p\n", a, (void *)&a, aptr, *aptr, &aptr);
    int *bptr = &b;
    printf("b = %d, &b = %p, bptr = %p, *bptr = %d\n", b, &b, bptr, *bptr);
}
