#include <stdio.h>
#include <stdbool.h>

int main() {
    int a[20], b[20], index, temp;
    bool swapped = true;

    printf("Insira 20 valores para a matriz A:\n");
    for (int i=0; i<20; i++) {
        scanf("%d", &a[i]);
    }

    for (int i=0; i<20; i++) {
        b[i] = a[i]+2;
    }

    while (swapped) {
        swapped = false;
        for (int i = 0; i<20; i++) {
            if (b[i] > b[i+1]) {
                swapped = true;
                temp = b[i];
                b[i] = b[i+1];
                b[i+1] = temp;
            }
        }
    }

    printf("Digite o índice que deseja conferir\nCaso queira sair, digite 100\n");
    while (true) {
        scanf("%d", &index);
        if (index == 100){
            break;
        }
        else if (index<20 && index>=0) {
            printf("B[%d] = %d\n", index, b[index]);
        }
        else {
            printf("índice inexistente");
        }
    }
    return 0;

}