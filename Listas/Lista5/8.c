#include <stdio.h>
#include <stdbool.h>

int main() {
    float notas[40], temp;
    bool swapped = true;
    int index;
    

    printf("Digite a nota dos alunos: \n");
    for (int i=0; i<40; i++) {
        scanf("%f", &notas[i]);
    }

    while (swapped) {
        swapped = false;
        for (int i = 0; i<40; i++) {
            if (notas[i] > notas[i+1]) {
                swapped = true;
                temp = notas[i];
                notas[i] = notas [i+1];
                notas [i+1] = temp;
            }
        }
    }

    printf("Digite o índice ou '100' para parar: \n");
    while (true) {
        scanf("%d", &index);
        if (index == 100){
            break;
        }
        else if (index<40 && index>=0) {
            printf("%.2f\n", notas[index]);
        }
        else {
            printf("índice inexistente");
        }
    }
    return 0;


}