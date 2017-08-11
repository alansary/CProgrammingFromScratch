#include <stdio.h>
void printString(char *A);
void printArray(int A[], int n);
void printStringV2(char A[]);
void printArrayV2(int *A, int n);
void printArrayV3(int *A, int n);
void printArrayV4(int *A, int n);
int main(){
    char firstName[8] = {'M', 'o', 'h', 'a', 'm', 'e', 'd', '\0'};
    char secondName[] = "Amr";
    char *lastName = "Alansary";
    printString(firstName);
    printString(secondName);
    printString(lastName);
    printStringV2(firstName);
    printStringV2(secondName);
    printStringV2(lastName);
    int sequence1[5] = {1, 2, 3, 4, 5};
    int sequence2[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    printArray(sequence1, sizeof(sequence1)/sizeof(int));
    printArray(sequence2, sizeof(sequence2)/sizeof(int));
    printArrayV2(sequence1, sizeof(sequence1)/sizeof(int));
    printArrayV2(sequence2, sizeof(sequence2)/sizeof(int));
}
void printString(char *A){ //or char A[]
    printf("%s\n", A);
}
void printArray(int A[], int n){ //or int *A
    int i;
    for(i=0; i<n-1; i++)
        printf("%d ", A[i]);
    printf("%d\n", A[i]);
}
void printStringV2(char A[]){ //or char *A
    char *Aptr = A;
    while(*Aptr != '\0'){
        printf("%c", *Aptr);
        Aptr++;
    }
    printf("\n");
}
void printArrayV2(int *A, int n){ //or int A[]
    int i, *Aptr = A;
    for(i=0; i<n-1; i++){
        printf("%d ", *Aptr);
        Aptr++;
    }
    printf("%d\n", *Aptr);
}
void printArrayV3(int *A, int n){ //or int A[]
    int *Aptr;
    for(Aptr = A; Aptr<A+n-1; Aptr++)
        printf("%d ", *Aptr);
    printf("%d\n", *Aptr);
}
void printArrayV4(int *A, int n){ //or int A[]
    int i, *Aptr = A;
    for(i=0; i<n-1; i++, Aptr++)
        printf("%d ", *Aptr);
    printf("%d\n", *Aptr);
}
