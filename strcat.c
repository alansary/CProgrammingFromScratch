/* strcat is a library function that included in string.h header file */
/* char* strcat(char* dest, char* src) - strcat combines two strings
   and returns a pointer to the destination string. In order for this
   function to word, you must have enough room in the destination to
   accommodate both strings.
*/
#include <stdio.h>
char* _strcat(char *, char *);
void main(void) {
    //the size of the string is allocated while compilation; copying a
    //string to it will extend the string but the sizeof operator will
    //return the same size which is pre-allocated while compilation since
    //strings in C are of fixed size
    char first_string[] = "Hello";
    printf("The size of the string A is %d\n", sizeof(first_string));
    char second_string[] = ", World!";
    printf("%s%s\n", first_string, second_string);
    printf(_strcat(first_string, second_string));
    puts("");
    printf("%s\n", first_string);
    printf("The size of the string A is %d\n", sizeof(first_string));
}
char* _strcat(char *dest, char *src) {
    char *ptr = dest;
    while (*ptr != '\0') ptr++; //move to the end of the string dest
    for (; *src != '\0'; src++, ptr++) *ptr = *src; //copies src to the end 
                                                    // of dest
    *ptr = *src; //copies the NULL character (it could be: *ptr = '\0')
    return dest;
}
/*
//returns an empty string since dest is at the NULL terminator
char* _strcat(char *dest, char *src) {
    while (*dest != '\0') dest++; //move to the end of the string dest
    for (; *src != '\0'; src++, dest++) *dest = *src; //copies src to the
                                                      //end of dest
    *dest = *src; //copies the NULL character (it could be: *ptr = '\0')
    return dest;
}
*/
