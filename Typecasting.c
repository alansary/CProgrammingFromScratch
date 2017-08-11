#include <stdio.h>
int main(){
	int a = 1025, *aptr = &a;
	printf("Size of integer is %d bytes\n", sizeof(int));
	printf("Address of aptr is %d\n", &aptr);
	printf("Address = %d, value = %d\n", aptr, *aptr);
	char *p;
	printf("Address of p is %d\n", &p);
	p = (char*)aptr; //Typecasting
	printf("Size of char is %d bytes\n", sizeof(char));
	printf("Address = %d, value = %d\n", p, *p);
	printf("Address of p+1 is %d, content of p+1 is %d\n", (p+1), *(p+1));
	*(p+1) = 10;
	printf("a = %d\n", a);
	return 0;
}
