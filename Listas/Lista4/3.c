#include<stdio.h>

int main() {
    int a[5], b[5], c[5];

    printf("Digite 5 número inteiros para a matriz A: \n");
    for (int i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Digite 5 número inteiros para a matriz B: \n");
    for (int i=0; i<5; i++) {
        scanf("%d", &b[i]);    
    }

    for (int i=0; i<5; i++) {
        c[i] = a[i] - b[i];
    }

    for (int i=0; i<5; i++) {
        printf("C[%d] = %d\n", i, c[i]);
    }

    return 0;

}