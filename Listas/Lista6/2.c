/*2)- Ler 2 matrizes A e B, cada uma com 1D para 7 elementos. Criar
uma matriz C de 2D, onde a 1ª coluna deverá ser formada pelos
elementos da matriz A e a 2ª coluna deverá ser formada pelos
elementos da matriz B. Exibir a matriz C.
*/

#include <stdio.h>

int main() {
    int a[7], b[7], c[7][2];

    printf("Digite os valores da matriz A:\n");
    for (int i=0; i<7; i++) {
        scanf("%d", &a[i]);
    }

    printf("Digite os valores da matriz B:\n");
    for (int i=0; i<7; i++) {
        scanf("%d", &b[i]);
    }

    for (int i=0; i<7; i++) {
        c[i][0] = a[i];
    }
    for (int i=0; i<7; i++) {
        c[i][1] = b[i];
    }

    for (int i=0; i<2; i++) {
        for (int x=0; x<7; x++) {
            printf("C[%d][%d] = %d\n", i, x, c[x][i]);
        };
    }
    return 0;
}