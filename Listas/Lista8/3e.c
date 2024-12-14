#include <stdio.h>

void bubbleSort(int array[], int tamanho) {
    for (int i = 0; i < tamanho - 1; ++i) {
        for (int j = 0; j < tamanho - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int A[12], B[12], C[12];

    for (int i = 0; i < 12; ++i) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 12; ++i) {
        scanf("%d", &B[i]);
    }

    bubbleSort(A, 12);
    bubbleSort(B, 12);

    for (int i = 0; i < 12; ++i) {
        C[i] = A[i] + B[i];
    }

    bubbleSort(C, 12);

    for (int i = 0; i < 12; ++i) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}