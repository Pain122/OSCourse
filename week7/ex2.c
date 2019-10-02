#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("\n");
    int* a = malloc(n* sizeof(int));
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
    printf("Resulting array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    free(a);
    printf("\nMemory cleared\n");
    
    return 0;
}
    
