#include <stdio.h>
#include <stdbool.h>

int main() {
    int a[8], b[8], temp, index;
    bool swapped = true;
    
    printf("Insira 8 valores interiros para A:\n");
    for (int i=0; i<8; i++) {
        scanf("%d", &a[i]);
    }

    for (int i=0; i<8; i++) {
        b[i] = a[i]*5;
    }

    while (swapped) {
        swapped = false;
        for (int i=0; i<8; i++) {
            if (b[i] > b[i+1]) {
                swapped = true;
                temp = b[i];
                b[i] = b[i+1];
                b[i+1] = temp;
            }
        }
    }

    for (int i=0; i<8; i++) {
        printf("B[%d] = %d\n", i, b[i]);
    }
    
    printf("Digite 100 para parar\n");
    while (true) {
        printf("Número do índice: ");
        scanf("%d", &index);
        if (index>=0 && index<8) {
            printf("%d\n", b[index]);
        }
        else if (index == 100) {
            break;
        }
        else {
            printf("índice inexistente\n");
        }
        
    }

    return 0;
}