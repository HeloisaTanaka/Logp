#include <stdio.h>
int main ()

{
    int a, b, c;
    printf("Digite o valor do número inteiro A: ");
    scanf("%i", &a);
    printf("Digite o valor do número inteiro B: ");
    scanf("%i", &b);
    printf("Digite o valor do número inteiro C: ");
    scanf("%i", &c);

    if (a%2==0 && a%3==0) {
        if (b%2==0 && b%3==0) {
            if (c%2==0 && c%3==0) {
                printf("%i, %i e %i são divisíveis por 2 e por 3", a, b, c);
            }
            else {
                printf("%i e %i são divisíveis por 2 e por 3", a, b);
            }
        }
        else {
            if (c%2==0 && c%3==0) {
                printf("%i e %i são divisíveis por 2 e por 3", a, c);
            }
            else {
                printf("%i é divisível por 2 e por 3", a);
            }
        }
    }
    else if (b%2==0 && b%3==0) {
        if (c%2==0 && c%3==0) {
            printf("%i e %i são divisíveis por 2 e por 3", b, c);
        }
        else {
            printf("%i é divisível por 2 e por 3", b);
        }
    }
    else {
        if (c%2==0 && c%3==0) {
            printf("%i é divisível por 2 e por 3", c);
        }
        else {
            printf("Nenhum doa números inseridos é divisível por 2 e por 3");
        }
    }
}


