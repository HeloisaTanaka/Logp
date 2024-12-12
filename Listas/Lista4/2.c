#include <stdio.h>

int main() {
    int a[6], b[6];
    
    printf("Digite 6 números inteiros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 6; i++) {
        int fatorial = 1;
        for (int j = 1; j < a[i]; j++) {
            fatorial *= j; 
        }
        b[i] = fatorial;  
    }
    
    for (int i = 0; i < 6; i++) {
        printf("B[%d] = %d\n", i, b[i]);
    }

    return 0;
}

