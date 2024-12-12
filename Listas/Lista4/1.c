#include<stdio.h>

int main() {
    int a[5], b[5]; 
    
    printf("Insira 5 valores interiros para A:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++) {
        b[i] = a[i] * 3;
    }

    printf("\nVetor B:\n");
    for (int i = 0; i < 5; i++) {
        printf("B[%d] = %d\n", i, b[i]);
    }

    return 0;
}