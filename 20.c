/* Strings
 * A sequence of characters is often referred to as a character "string".
 * A string is stored in an array of type char ending with the null
 * character '\0'
 * A string constant is a sequence of characters enclosed in double quotes.
 */
/* Difference between char *ptr = "string" and char array[] = "string"
 *     char *ptr = "string"
 *         ptr is a pointer to constant string (a sequence of locatoins that
 *         are "read-only" portion of the program that is executing
 *         we can not use indexes to override any of the characters within
 *         the string. ptr can point to any other memory location.
 *         ptr size is 8 bytes
 *     char array[] = "string"
 *         array is a pointer to the first character in the string, we
 *         can use indexes and override any character of the string, the
 *         size of the array equals the number of the character in the
 *         string plus the NULL character '\0'. array can not point to any
 *         other memory location, it is a constant pointer.
 *     In summary, ptr is a pointer to a constant string in "read-only"
 *     memory and array is a constant pointer to a string in "rw-memory".
 *     If we don't need to change a passed string to a function we pass it
 *     as char * but passing at as char a[] will make it passed by reference
 *     not by value.
 *     sizeof(ptr) -> 8 bytes which is the size of all pointers in gcc
 *     compiler but sizeof(array) -> the number of elements in the array
 *     ; that is, it returns the sizeof the array it points to.
 *     ptr[i] = 'c'; //undefined behavior
 *     array = ptr; //error
 *     scanf("%s", constant_pointer_to_a_string); //scans till ' '
 */
#include <stdio.h>
void main(void) {
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    str[1] = 'a';
    printf("%p  %s  %c\n", str, str, *str);
    printf("%d\n", sizeof(str));
    char emptyStr[] = {'\0'};
    char str2[] = "Hello";
    str2[1] = 'a';
    printf("%p  %s  %c\n", str2, str2, *str2);
    printf("%d\n", sizeof(str2));
    char str3[] = {'H', 'e', 'l', 'l', 'o'};
    str3[1] = 'a';
    printf("%p  %s  %c\n", str3, str3, *str3);
    printf("%d\n", sizeof(str3));
    char *str4 = "Hello"; //char* is a pointer to a character
    //it can point to another memory location, it is stored within 8 bytes
    //in our case above, str4 points to a sequence of locations that are
    //"read-only" portion of the program that is executing.
    //We cannot use index operations on this char* str = "string"
    //This string is put into the read-only portion of memory
    printf("%p  %s  %c\n", str4, str4, *str4);
    printf("%d\n", sizeof(str4));
}
