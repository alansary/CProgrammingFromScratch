#include <stdio.h>
int main(){
    int a[] = {5, 7, 13, 12, 9, 14};
	int int_size;
	int char_size;
	int float_size;
	int_size = sizeof(int);
	char_size = sizeof(char);
	float_size = sizeof(float);
	printf("int, char, and float use %d %d and %d bytes\n", int_size, char_size, float_size);
	int n;
	n = sizeof(a) / sizeof(int);
	printf("The number of elements in a is %d\n", n);
	return 0;
}
