#include <stdio.h>
int main ()

{
    int a;
    printf("Digite um número inteiro:");
    scanf("%i", &a);

    if (a==0) {
        printf("0 não possui módulo, uma vez que é um número neutro");
    }
    else if (a>0) {
        printf("O módulo de %.i é %i", a, a);
    }
    else {
        printf("O módulo de %i é %i", a, a*(-1));
    }
}


