#include <stdio.h>
struct Complex{
    float real, imag;
};
typedef struct Complex Complex;
Complex sum(Complex x, Complex y);
Complex prod(Complex x, Complex y);
int main(){
    Complex c1 = {23, .56}, c2, s, p;
    c2.real = 25;
    c2.imag = .35;
    s = sum(c1, c2);
    p = prod(c1, c2);
    printf("s = %f\tp = %f", s.real+s.imag, p.real+p.imag);
    return 0;
}
Complex sum(Complex x, Complex y){
    Complex sum;
    sum.real = x.real + y.real;
    sum.imag = x.imag + y.imag;
    return sum;
}
Complex prod(Complex x, Complex y){
    Complex prod;
    prod.real = (x.real * y.real) - (x.imag * y.imag);
    prod.imag = (x.real * y.imag) + (x.imag * y.real);
    return prod;
}
