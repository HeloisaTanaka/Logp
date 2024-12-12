#include <stdio.h>
#include <math.h>

int main() {
    float a[8], b[8];

    printf("Digite 8 números inteiros para a matriz A: \n");
    for (int i=0; i<8; i++) {
        scanf("%f", &a[i]);
    }

    for (int i=0; i<8; i++) {
        b[i] = pow(a[i], 0.5);
    }
   
    for (int i=0; i<8; i++) {
        printf("B[%d] = %f\n", i, b[i]);
    }
    return 0;

}