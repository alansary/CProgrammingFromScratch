#include <stdio.h>
int main(){
    char A[100];
    int i = 0, j;
    printf("Enter a string:\n");
    scanf("%s", &A);
    char *p = A, *q = A; //p is point to the first character
    while(*q != '\0')
        q++;
    q--; //q is point to the last character
    if(p != q){ //Contains more than one character
        while(*p == *q && p <= q){
            i++;
            p++;
            q--;
        }
        if(!(p <= q)) //Violates p<=q condition. That is, p==q
            i--;p--;q++;
        if(!(*p == *q)) //Violates *p == *q condition
            i--;
        if(i == 0){ //While condition is false at the first time
            printf("0");
        }
        else if(p == q){
            printf("%s", A);
        }
        else{ //When violates *p == *q condition
            for(j=0; j<i; j++){
                printf("%c", A[j]);
            }
        }
    }
    else{ //p == q That is, the string contains one single character
        printf("%s", A);
    }
    return 0;
}
