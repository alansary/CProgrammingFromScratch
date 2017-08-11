#include <stdio.h>
int main(){
	int a[10][10], b[10][10], c[10][10]; //Max size 10 by 10
	int aRows, aCols, bRows, bCols, cRows, cCols;
	//Condition: aCols == bRows
	//Output: cRows == aRows && cCols == bCols
	int i, j, k;
	printf("Enter the number of rows and columns of the first matrix:\n");
	scanf("%d%d", &aRows, &aCols);
	for(i=0; i<aRows; i++)
		for(j=0; j<aCols; j++){
			printf("Element a%d%d: ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	point:
		printf("Enter the number of rows and columns of the second matrix:\n");
		scanf("%d%d", &bRows, &bCols);
		if(aCols!=bRows){
			printf("The number of columns of the first matrix must equals to the number of rows of the second\n");
			goto point;
		}
		else{
			for(i=0; i<bRows; i++)
				for(j=0; j<bCols; j++){
					printf("Element b%d%d: ", i+1, j+1);
					scanf("%d", &b[i][j]);
				}
			cRows = aRows;
			cCols = bCols;
			for(i=0; i<cRows; i++)
				for(j=0; j<cCols; j++){
					c[i][j];
					for(k=0; k<aCols; k++)//k<bRows
						c[i][j] += a[i][k]*b[k][j];//Cross product
				}
		}
		for(i=0; i<cRows; i++){
			for(j=0; j<cCols; j++) //Print a row
				printf("%d ", c[i][j]); //Notice missing \n
			printf("\n"); //Print a new line at the end of a row
		}
}
