/* Simple program: Print the first 5 integers */
#include <stdio.h>
void main(void) {
    for (int x = 1; x <= 5; x++)
        printf("%d\n", x);
    puts("");
    int counter = 1;
    while (counter <= 5) {
        printf("%d\n", counter);
        counter++;
    }
}
