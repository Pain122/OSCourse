#include <stdio.h>
#include <string.h>
// I made choise of figure in command line as 2 arguement
// 1 - triandle, 2 - half triangle, 3 - square

void print1(int i) {
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

void print2(int i) {
    for (int j = 0; j != i; j++) {
        for (int k = 0; k != i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

void print3(int i) {
    for (int j = 0; j != i; j++) {
        for (int k = 0; k != j+1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(int argc, char* argv[]) {
    int i, j;
    sscanf(argv[1], "%d", &i);
    sscanf(argv[2], "%d", &j);

    switch (j) {
        case 1: print1(i);
            break;
        case 2: print2(i);
			break;
        case 3: print3(i);
			break;
    }
    return 0;
}