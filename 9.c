/*
 *Counter Controlled
    Repeat a set of operations for some fixed number of times
    Use when the number of repetitions is known.
 *Sentinel Controlled
    Loop runs until a certain condition is met
    Use when the number of repetitions is a property of the input and
    not of the problem being solved
*/
#include <stdio.h>
void main(void) {
    /* Compute the sum of first 20 odd numbers */
    int sum = 0;
    for (int x = 1; x <= 40; x += 2)
        sum += x;
    // x is the loop control variable and x <= 20 is the termination cond
    printf("%d\n", sum);
}
