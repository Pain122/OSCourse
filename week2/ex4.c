#include <stdio.h>
#include <string.h>
void swap(int a, int b) {
    printf("%d %d", b, a);
}

int main(int argc, char* argv[]) {
    int size = 1000000;
    char c[size];
    fgets(c, size, stdin);
    int a;
    int b;

    sscanf(c, "%d %d", &a, &b);
    swap(a, b);

    return 0;
}