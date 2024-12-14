#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, temp;

    if (n > 0) {
        printf("%d ", a);
    }
    if (n > 1) {
        printf("%d ", b);
    }

    for (int i = 2; i < n; i++) {
        temp = a + b;
        printf("%d ", temp);
        a = b;
        b = temp;
    }
}

int main() {
    int n;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);
    
    printf("Sequência de Fibonacci até o %dº termo:\n", n);
    fibonacci(n); 
    
    printf("\n");
    return 0;
}