#include <stdio.h>
#include <stdbool.h>

int main() {
    int a[15], b[15], c[15], temp;
    bool swapped = true;

    printf("Digite 15 números inteiros para a matriz A:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &a[i]);
    }

    while (swapped) {
        swapped = false;
        for (int i=0; i<15; i++) {
            if (a[i] > a[i+1]) {
                swapped = true;
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    for (int i = 0; i < 15; i++) {
        printf("A[%d] = %d\n", i, a[i]);
    }

    printf("Digite 15 números inteiros para a matriz B:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &b[i]);
    }

    bool change = true;
    while (change) {
        change = false;
        for (int i=0; i<15; i++) {
            if (b[i] > b[i+1]) {
                change = true;
                temp = b[i];
                b[i] = b[i+1];
                b[i+1] = temp;
            }
        }
    }

    for (int i = 0; i < 15; i++) {
        printf("B[%d] = %d\n", i, b[i]);
    }

    for (int i=0; i<15; i++) {
        c[i] = a[i] + b[i];
        printf("C[%d] = %d\n", i, c[i]);
    }

    return 0;
}