#include <stdio.h>
#include <stdbool.h>

int main() {
    int a[15], b[15], temp;
    bool swapped = true;

    printf("Digite 15 números inteiros:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 15; i++) {
        int fatorial = 1;
        for (int j = 1; j < a[i]; j++) {
            fatorial *= j; 
        }
        b[i] = fatorial;  
    }

    while (swapped) {
        swapped = false;
        for (int i=0; i<15; i++) {
            if (b[i] > b[i+1]) {
                swapped = true;
                temp = b[i];
                b[i] = b[i+1];
                b[i+1] = temp;
            }
        }
    }
    
    for (int i = 0; i < 15; i++) {
        printf("B[%d] = %d\n", i, b[i]);
    }

    return 0;
}