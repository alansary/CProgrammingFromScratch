#include <stdio.h>
int main(){
    int a = 10, *aptr = &a;
    void *vptr; //void pointer - Generic pointer
    vptr = aptr; //No typecasting
    printf("aptr = %d\tvptr = %d\n*aptr = %d\n", aptr, vptr, *aptr);
    //Because the void pointer is not mapped to a particular data type, we can not dereference it
    //Dereferencing a void pointer is enabled by default
    //We can not apply pointer arithmetic upon it
}
