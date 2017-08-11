/* If the given number is a multiple of 3, ask for another input.
   Otherwise, thank the user.
*/
#include <stdio.h>
void main(void) {
    int x;
    scanf("%d", &x);
    if (x % 3 == 0) {
        printf("x is a multiple of 3; Please enter another number\n");
        scanf("%d", &x);
    }
    else {
        printf("Thank you!\n");
    }
    /*
        Single Selection
        Double Selection
        Cascading if..else
        Nested if..else
    */
}
