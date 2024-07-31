#include <stdio.h>
#include <math.h>
int main ()

{
    int n, q;
    printf("Digite um número inteiro: ");
    scanf("%i", &n);
    q = pow(n, 2);
    printf("O quadrado de %i é %i", n, q);
}
