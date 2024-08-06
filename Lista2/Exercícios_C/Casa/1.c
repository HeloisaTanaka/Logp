#include <stdio.h>
int main ()

{
    int a;
    printf("Digite um número inteiro: ");
    scanf("%i", &a);

    if (a%2==0) 
    {
        printf("O número %i é par.", a);
    }
    else 
    {
        printf("O número %i é ímpar.", a);
    }
    
}

