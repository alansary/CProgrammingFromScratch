#include <stdio.h>
void swapping(int A[], int i, int j);
int main(){
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    for(i=0; i<9; i++)
        printf("%d ", A[i]);
    printf("%d\n", A[i]);
    swapping(A, 0, 9);
    for(i=0; i<9; i++)
        printf("%d ", A[i]);
    printf("%d\n", A[i]);
    return 0;
}
void swapping(int A[], int i, int j){
    int temp;
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
