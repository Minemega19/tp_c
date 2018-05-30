#include <stdio.h>
double a=1;
double b=2;
void swap (double x, double y) {
    double z = x;
    a = y;
    b = z;
}
int main (void) {
    printf("a = %f et b = %f \n", a, b);
    swap(a, b);
    printf("a = %f et b = %f\n", a, b);
    swap2(a,b);
    printf("a = %f et b = %f\n", &a, &b);
    return 0;
}

void swap2(double x, double y){

}
