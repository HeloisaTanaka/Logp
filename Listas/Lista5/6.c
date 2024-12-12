#include <stdio.h>
#include <stdbool.h>

int main() {
    int a[30], b[30], index;

    printf("Insira 30 valores para a matriz A:\n");
    for (int i=0; i<30; i++) {
        scanf("%d", &a[i]);
    }

    for (int i=0; i<30; i++) {
        b[i] = a[i]*a[i]*a[i];
    }

    printf("Digite o índice que deseja conferir\nCaso queira sair, digite 100\n");
    while (true) {
        scanf("%d", &index);
        if (index == 100){
            break;
        }
        else if (index<30 && index>=0) {
            printf("A[%d] = %d\n", index, a[index]);
        }
        else {
            printf("índice inexistente");
        }
    }
    return 0;

}