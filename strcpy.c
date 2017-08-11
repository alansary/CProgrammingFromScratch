/* strcpy is a library function defined in string.h header files */
/* char* strcpy(char* dest, char* src) - strcpy copies one string to
   another. The destination must be large enough to accept the contents
   of the soource string
*/
#include <stdio.h>
void _strcpy(char *, char *);
void main(void) {
    char name[] = "Mohamed";
    char name_copy[sizeof(name)];
    _strcpy(name_copy, name);
    printf("%s  %s\n", name, name_copy);
}
void _strcpy(char *dest, char *src) {
    for (; *src != '\0'; dest++, src++)
        *dest = *src;
/*
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
*/
}
/*
void _strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
}
*/
