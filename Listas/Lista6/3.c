/*3)- Ler uma matriz A de 1D com 10 elementos. Criar uma matriz B de
2D com 3 colunas, onde:
- a 1ª coluna da matriz B é formada pelos elementos da matriz A
somados com mais 5;
- a 2ª coluna é formada pelo valor do cálculo da fatorial de cada
elemento correspondente da matriz A;
- a 3ª coluna deverá ser formada pelos quadrados dos elementos
correspondentes da matriz A.
Exibir a matriz B.*/

#include <stdio.h>

int main() {
    float a[10], b[10][3];
    int fatorial;

    printf("Digite 10 valores para a matriz A:\n");
    for (int i=0; i<10; i++) {
        scanf("%f", &a[i]);        
    }

    for (int i=0; i<10; i++) {
        b[i][0] = a[i] + 5;

        fatorial = 1;
        for (int j = 1; j < a[i]; j++) {
            fatorial *= j; 
        }
        b[i][1] = fatorial;

        b[i][2] = a[i]*a[i];    
    }

    for (int i=0; i<3; i++) {
        for (int x=0; x<10; x++) {
            printf("B[%d][%d] = %.2f\n", x, i, b[x][i]);
        }
    }

    return 0;
}