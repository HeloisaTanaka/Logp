#include <stdio.h>

int main() {
    int a[8], b[8], f;

    printf("Digite 10 número inteiros para a matriz A: \n");
    for (int i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        b[i] = a[9 - i]; 
    }
   
    for (int i=0; i<10; i++) {
        printf("B[%d] = %d\n", i, b[i]);
    }
    return 0;

}
