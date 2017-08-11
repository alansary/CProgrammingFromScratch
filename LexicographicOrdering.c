/* Based on the ordering of characters ' ' <A < B ... < Z < a < b < ... < z
   If w11w12...w1n == w21w22...w2n in the strings w11w12...w1nX and
   w21w22...w2n, then w21w22...w2n < w11w12...w1nX
   1 - Order according to the order of characters.
   2 - If all characters are the same until one of them is fully scanned,
       then according to the length.
 */
/*
   int strcmp(const char *s1, const char *s2);
   int strncmp(const char *s1, const char *s2, size_t n);
    - Compares first n characters only
*/
/*
    Test Cases:
    Badri < Devendra
    Janak < Janaki
    Shiva < Shivendra
    Seeta < Sita
    Badri < badri
    Bad < Badri
    "Bill Clinton" < "Bill Gates"
    "Ram Subramanian" < "Ram Subramanium"
    "Ram Subramanian" < "Rama Awasthi"
    Hello = Hello
    Hell < Hello
    Bell < Bull
    Hello < Hull
*/
#include <stdio.h>
int lexicographicOrdering(char *, char *);
void main(void) {
    char first_string[10];
    char second_string[10];
    scanf("%s%s", &first_string, &second_string);
    int result = lexicographicOrdering(first_string, second_string);
    if (result == -1)
        printf("%s < %s\n", first_string, second_string);
    else if (result == 1)
        printf("%s < %s\n", second_string, first_string);
    else if (result == 0)
        printf("%s == %s\n", first_string, second_string);
    result = lexicographicOrdering("Bill Clinton", "Bill Gates");
    printf("%d  ", result);
    result = lexicographicOrdering("Ram Subramanian", "Ram Subramanium");
    printf("%d  ", result);
    result = lexicographicOrdering("Ram Subramanian", "Rama Awasthi");
    printf("%d\n", result);
}
int lexicographicOrdering(char *s1, char *s2) {
    //scanning the two strings till we found a dismatch or one of them ends
    while ((*s1 != '\0' || *s2 != '\0') && *s1 == *s2) {
        *s1++;
        *s2++;
    }
    //if we found a dismatch but the two strings do not end
    //check ordering the current character
    if (*s1 != '\0' && *s2 != '\0') {
        if (*s1 < *s2)
            return -1; //return -1 in case s1 < s2
        else
            return 1; //return 1 in case s2 < s1
    }
    //if one of them ends and no dismatch
    else {
        if (*s2 != '\0')
            return -1; //return -1 if the length of s2 is greater than that 
                       //of s1
        else if (*s1 != '\0')
            return 1; //return 1 if the length of s1 is greater than that of
                      //s2
        else
            return 0; //return 0 if both strings are equal
    }
}
