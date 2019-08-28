#include <stdio.h>
#include <string.h>


int main() {
    int size = 1000000;
    char c[size];
    fgets(c, size, stdin);
    int i = strlen(c);
    for (int j = i-1; j > -1 ; j--) {
        putchar(c[j]);
    }
    return 0;
}