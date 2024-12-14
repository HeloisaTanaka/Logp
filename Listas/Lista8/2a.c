#include <stdio.h>

int somatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    printf("O somatório dos primeiros %d números inteiros é: %d\n", n, somatorio(n));
    return 0;
}