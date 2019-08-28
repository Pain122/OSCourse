#include <stdio.h>
#include <limits.h>
#include <float.h>


int main() {
    int a = INT_MAX;
    float b = FLT_MAX;
    double c = DBL_MAX;
    printf("Size of int: %d; Value of int: %i; \n", sizeof(a), a);
    printf("Size of float: %d; Value of float: %f; \n", sizeof(b), b);
    printf("Size of double: %d; Value of double: %g", sizeof(c), c);
    return 0;
}