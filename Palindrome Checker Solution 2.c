#include <stdio.h>
#include <string.h>
void printChars(char *p, char *q);
int main(){
    char A[100];
    scanf("%s", A);
    int len = strlen(A);
    char *p = A, *q = &A[len-1];
    if(p != q){ //Contains more than one character
        while(p < q && *p == *q){
            p++;q--;
        }
        if(p==A){ //Not a palindrome, p and q are not changed
            p = NULL;q = NULL;
        }
        else if(p < q){ //!(*p == *q)
            q = p - 1;
            p = A;
        }
        else{ //!(p < q)
            p = A;
            q = A + len - 1; //or q = &A[len - 1]
        }
    }
    printChars(p, q);
    return 0;
}
void printChars(char *p, char *q){
	//p is the starting location of the prefix that you want to print
	//q is the ending location of the prefix that you want to print
	if(p==NULL){
		printf("0");
	}
	else{
		while(p<=q){
			printf("%c", *p);
			p++;
		}
	}
}
