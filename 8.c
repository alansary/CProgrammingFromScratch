/* Switch statement is a multi-way decision statement */
// case const-expression: statement;
#include <stdio.h>
void main(void) {
    char c;
    scanf("%c", &c);
    switch (c) {
        case 'a': case 'A': printf("Ahmed\n"); break;
        case 'm':
        case 'M':
            printf("Mohamed\n");
            printf("Mahmoud\n");
            break;
        case 'n': printf("Nour\n"); break;
        default:
            printf("Unknown!\n");
    }
}
