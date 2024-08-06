#include <stdio.h>
int main ()

{
    int a, b;
    printf("Digite um número inteiro entre 0 e 100: ");
    scanf("%i", &a);
    printf("Digite um número chave: ");
    scanf("%i", &b);

    if (a>=0 && a<=100)
    {
        if (a>b) 
        {
            printf("A distância entre esses números é %i", a-b);
        }
        else
        {
            printf("A distância entre esses números é %i", b-a);
        }
    }
    else
    {
        printf("Número inválido.");
    }

}
