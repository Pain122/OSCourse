#include <stdio.h>
#include <string.h>
// I made choise of figure in command line as 2 arguement
// 1 - triandle, 2 - half triangle, 3 - square

void print1(int i) {
    
}
int main(int argc, char* argv[]) {
    int i, j;
    sscanf(argv[1], "%d", &i);

    for (int j = 0; j != i; j++) {
        for (int k = 0; k + j != i-1; k++) {
            printf(" ");
        }
        for (int k = 1; k <= (2*(j+1)-1); k++) {
            printf("*");
        }
        printf("\n");
    }
}