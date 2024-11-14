#include <stdio.h>
int main ()

{
    int a, b;
    printf("Digite o valor do número inteiro A: ");
    scanf("%i", &a);
    printf("Digite o valor do número inteiro B: ");
    scanf("%i", &b);

    if (a%4==0 || a%5==0) {
        if (b%4==0 || b%5==0)
            {printf("%i e %i são divisíveis por 4 ou por 5", a, b); }
        else
            {printf("%i é divisível por 4 ou por 5", a); }
    }
    else {
        if (b%4==0 || b%5==0)
            {printf("%i é divisível por 4 ou por 5", b); }
        else    
            {printf("Nenhum dos números inseridos é divisível por 4 ou por 5"); }
    }
}
