#include <stdio.h>
//#include <string.h>
int stringLength(char *A); //Find length of string A
int strlen(char *s); //Find length of string A, included in <string.h>
void strCpy(char *A, char *B); //copies the content of string B to string A, included in <string.h>
void stringCopy(char *A, char *B); //copies the content of string B to string A
char* strcat(char *A, char *B); //Appends string B to string A and returns string A, included in <string.h>
void strrev(char* A); //Reverses the string A, included in <string.h>
void stringCompare(char *A, char *B, int N1, int N2);
int main(){
    char *str = "Mohamed Alansary";
    printf("Length of \"Mohamed Alansary\" is %d = %d\n", stringLength(str), strlen(str));

    char strB[] = "Hello, World", strA[13];
    strCpy(strA, strB);
    printf("strA = %s\tstrB = %s\n", strA, strB);
    printf("sizeof(strA) = %d\tsizeof(strB) = %d\n", sizeof(strA), sizeof(strB));
    char strB2[] = "Good, Morning", strA2[14];
    stringCopy(strA2, strB2);
    printf("strA2 = %s\tstrB2 = %s\n", strA2, strB2);
    printf("sizeof(strA2) = %d\tsizeof(strB2) = %d\n", sizeof(strA2), sizeof(strB2));

    char strB4[] = " World", strA4[13] = "Hello,";
    printf("Before -> strA4 = %s\tstrB4 = %s\n", strA4, strB4);
    char *strConacatenate1 = strcat(strA4, strB4);
    printf("After -> strA4 = %s\tstrB4 = %s\tstrConcatenate1 = %s\n", strA4, strB4, strConacatenate1);
    char strB5[] = " Morning", strA5[14] = "Good,";
    printf("Before -> strA5 = %s\tstrB5 = %s\n", strA5, strB5);
    char *strConacatenate2 = strcat(strA5, strB5);
    printf("After -> strA5 = %s\tstrB5 = %s\tstrConcatenate2 = %s\n", strA5, strB5, strConacatenate2);

    char str1[] = "Mohamed Alansary";
    printf("Before -> str = %s\n", str1);
    strrev(str1);
    printf("After -> str = %s\n", str1);

    char s1[] = "Hello", s2[] = "Hello";
    stringCompare(s1, s2, sizeof(s1), sizeof(s2));
    char s3[] = "Hell", s4[] = "Hello";
    stringCompare(s3, s4, sizeof(3), sizeof(s4));
    char s5[] = "Hello", s6[] = "Hell";
    stringCompare(s5, s6, sizeof(s5), sizeof(s6));
    char s7[] = "Bell", s8[] = "Bull";
    stringCompare(s7, s8, sizeof(s7), sizeof(s8));
    char s9[] = "Hull", s10[] = "Hello";
    stringCompare(s9, s10, sizeof(s9), sizeof(s10));
}
int stringLength(char *A){
    int i = 0;
    while(A[i] != '\0') i++;
    return i;
}
int strlen(char *s){
    char *p = s;
    while(*p != '\0')
        p++;
    return p-s;
}
void strCpy(char *A, char *B){
    char *pA = A, *pB = B;
    while(*pB != '\0'){
        *pA = *pB;
        pB++;
        pA++;
    }
    *pA = *pB; //Copy the NULL termination
}
void stringCopy(char *A, char *B){
    int N2 = stringLength(B), k;
    for(k=0; k<=N2; k++)
        A[k] = B[k];
}
char* strcat(char *A, char *B){
    char *pA = A, *pB = B;
    while(*pA != '\0') //Loop till reaching NULL in A
        pA++;
    while(*pB != '\0'){ //Copying from B to A
        *pA = *pB;
        pB++;
        pA++;
    }
    *pA = *pB; //Copying the NULL from B to A
    return A;
}
void strrev(char* A){
    static int x = 0; //To preserve its recent value
    while(A[x] != '\0')
        x++;
    x++; //To reach the NULL termination
    printf("x = %d\n", x);
    char B[x];
    int i, j;
    for(i=0; i<x; i++) //Copying from A to B
        B[i] = A[i];
    //Notice: Indecies of array A[i] -> 0 to i-1
    //NULL is at index x-1 where x is the size including NULL itself
    for(i=x-2, j=0; i>=0, j<=x-2; i--, j++) //Copying from B to A in a reverse order
        A[j] = B[i];
    A[x-1] = '\0'; //Set the last element to NULL
}
void stringCompare(char *A, char *B, int N1, int N2){
	int k = 0;
	while((A[k] == B[k]) && k < N1 && k < N2)
		k++;
	if(k == N1 && k == N2) printf("A = B\n");
	else if(A[k] == '\0') printf("A < B\n");
	else if(B[k] == '\0') printf("A > B\n");
	else if (A[k] < B[k]) printf("A < B\n");
	else printf("A > B\n");
}
