#include <stdio.h>

int main() {
    int a[20], b[30], c[50];

    printf("Digite 20 números inteiros para a matriz A: \n");
    for (int i=0; i<20; i++) {
        scanf("%d", &a[i]);
    }

    printf("Digite 30 números inteiros para a matriz B: \n");
    for (int i=0; i<30; i++) {
        scanf("%d", &b[i]);    
    }

    for (int i=0; i<20; i++) {
        c[i] = a[i];
    }

    for (int i=0; i<30; i++) {
        c[i+20] = b[i];
    }

    for (int i=0; i<50; i++) {
        printf("C[%d] = %d\n", i, c[i]);
    }
    return 0;

}