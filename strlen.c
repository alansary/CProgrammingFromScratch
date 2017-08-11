/* strlen is a library function that included in string.h header file */
/* int strlen(const char* s) - strlen returns the length of a string,
   excluding the NULL character.
*/
#include <stdio.h>

int _strlen(char *s);
void main(void) {
    char *string1 = "This is the first string";
    char string2[] = "This is the second string";
    char string3[] = {'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 't', 'h', 'e',                      ' ', 't', 'h', 'i', 'r', 'd', ' ', 's', 't', 'r', 'i',                      'n', 'g', '\0'};
    char string4[] = {'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 't', 'h', 'e',                      ' ', 'f', 'o', 'u', 'r', 't', 'h', ' ', 's', 't', 'r',                      'i', 'g'};
    printf("%d  %d\n", sizeof(string1) - 1, _strlen(string1));
    //sizeof(pointer_to_constant_string) -> 8 byte
    printf("%d  %d\n", sizeof(string2) - 1, _strlen(string2));
    printf("%d  %d\n", sizeof(string3) - 1, _strlen(string3));
    printf("%d  %d\n", sizeof(string4), _strlen(string4));
    //there is no NULL character '\0', it will scan the entire memory till
    //till it finds the NULL character
}
int _strlen(char *s) {
    char *ptr = s;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - s; //sizeof(char) == 1 byte
}
/*
int _strlen(char *s) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}
*/
