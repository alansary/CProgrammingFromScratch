/*
 *Problem P1.1: Polynomial Multiplication
 *Two polynomials ax + b and cx + d
 *Product:
 *          (a * c) * x * x + (a * d + b * c) * x + b * d
 */
#include <stdio.h>
void main(void) {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    // scanf(format-string, &var1, &var2, ..., &varn);
    printf("%dx^2 + %dx + %d\n", a * c, a * d + b * c, b * d);
    // printf(format-string, var1, var2, ..., varn);
    // format specifiers
    // %d is for integers, %f is for floats, %s is for strings,
    // %c is for characters and %e is for exponent form.
    // Simple Statements are expressions and function calls.
}
