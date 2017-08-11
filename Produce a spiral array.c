#include <stdio.h>
int main(){
	int A[5][5], B[25];
	int rows, cols;
	int i, j;
	int cnt = 0, cnt1 = 0;
	printf("Enter the number of rows and columns:\n");
	scanf("%d%d", &rows, &cols);
	printf("Enter the elements of the array:\n");
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			scanf("%d", &A[i][j]);
		}
	}
	int top = 0, bot = rows-1, left = 0, right = cols-1;
	for(cnt1=1; cnt1<=rows/2 && cnt1 <= cols/2; cnt1++){
        /*Beginning of the first peel*/
		for(i=left; i<=right; i++){ //Traversing the top
			B[cnt++] = A[top][i];
		}
		for(i=top+1; i<=bot; i++){ //Traversing the right
			B[cnt++] = A[i][right];
		}
		for(i=right-1; i>=left; i--){ //Traversing the bottom
			B[cnt++] = A[bot][i];
		}
		for(i=bot-1; i>=top+1; i--){ //Traversing the left
			B[cnt++] = A[i][left];
		}
        /*End of the first peel*/
		top++; bot--;
		left++; right--;
	}
	/*Case we end up with one element in the center or one row or one column*/
	if(top==bot && left==right){ //We end up with one element in the center
		B[cnt++] = A[top][left]; //or A[bot][right], it does not matter
	}
	else if(top<bot){ //We end up with one column
		for(i=top; i<=bot; i++){
			B[cnt++] = A[i][left]; //or A[i][right], it does not matter
		}
	}
	else if(left<right){ //We end up with one row
		for(i=left; i<=right; i++){
			B[cnt++] = A[top][i]; //or A[bot][i], it does not matter
		}
	}
	/*We traversed all the elements*/
    /*Printing the result*/
	for(i=0; i<rows*cols-1; i++){
		printf("%d ", B[i]);
	}
	printf("%d", B[i]); //We do not need a space after the last element
	return 0;
}
