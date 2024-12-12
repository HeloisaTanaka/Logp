/*4)- Ler 2 matrizes A e B, cada uma com 1D para 4 elementos. Criar
uma matriz C de 2D, onde a 1ª coluna da matriz C deverá ser formada
pelos elementos da matriz A multiplicados por 2 e a 2ª coluna deverá
ser formada pelos elementos da matriz B subtraídos de 5. Exibir a
matriz C.*/

#include <stdio.h>

int main() {
    int a[4], b[4], c[4][2];

    printf("Insira os valores para A:\n");
    for (int i=0; i<4; i++) {
        scanf("%d", &a[i]);
    }

    printf("Insira os valores para B:\n");
    for (int i=0; i<4; i++) {
        scanf("%d", &b[i]);
    }

    for (int i=0; i<4; i++) {
        c[i][0] = a[i]*2;
        c[i][1] = b[i]-5;
    }

    for (int i=0; i<2; i++) {
        for (int x=0; x<4; x++) {
            printf("C[%d][%d] = %d\n", x, i, c[x][i]);
        }
    }
}