#include <stdio.h>

int main() {
    int a[5][3], b[5][3], c[5][3];
    
    printf("Digite 15 valores para a matriz A:\n");
    for (int i=0; i<5; i++) {
        for (int x=0; x<3; x++) {
            scanf("%d", &a[i][x]);
        }
    }

    printf("Digite 15 valores para a matriz B:\n");
    for (int i=0; i<5; i++) {
        for (int x=0; x<3; x++) {
            scanf("%d", &b[i][x]);
        }
    }

    for (int i=0; i<5; i++) {
        for (int x=0; x<3; x++) {
            c[i][x] = a[i][x] + b[i][x];
            printf("C[%d][%d] = %d\n", i, x, c[i][x]);
        };
    }
    return 0;

}