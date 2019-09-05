#include <stdio.h>

void bubbleSort(int a[], int n){
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] > a[i]) {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
}

int main(){
    int a[5] = {1, 5, 3, 2, 4};
    int n = 5;
    bubbleSort(a, n);
    for (int i = 0; i < n; i++) {
        if (i != 4) {
            printf("%d, ", a[i]);
        } else printf("%d.", a[i]);
    }
}