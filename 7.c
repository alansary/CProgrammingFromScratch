/* Example 4: cascading if
   Below 50: D; 50 to 59: C; 60 to 75: B; 75 above: A
*/
#include <stdio.h>
void main(void) {
    int marks;
    char grade;
    scanf("%d", &marks);
    if (marks < 50) {
        grade = 'D';
    }
    else if (marks >= 50 && marks <= 59) {
        grade = 'C';
    }
    else if (marks >= 60 && marks <= 75) {
        grade = 'B';
    }
    else {
        grade = 'A';
    }
    printf("%c\n", grade);
    // else gets matched to the nearest if statement without an else
}
