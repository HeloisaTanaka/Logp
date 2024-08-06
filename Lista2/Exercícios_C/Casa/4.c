#include <stdio.h>
int main ()

{
    float a, b, c;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    if (a!=b && b!=c && c!=a)
    {
        if (a>b && a>c)
        {
            if (b>c)
            {
                printf("Maior número: %.2f\nMenor número: %.2f\nNúmero do meio: %.2f", a, c, b);
            }
            else
            {
                printf("Maior número: %.2f\nMenor número: %.2f\nNúmero do meio: %.2f", a, b, c);
            }
        }
        else if (b>c && b>a)
        {
            if (a>c)
            {
                printf("Maior número: %.2f\nMenor número: %.2f\nNúmero do meio: %.2f", b, c, a);
            }
            else
            {
                printf("Maior número: %.2f\nMenor número: %.2f\nNúmero do meio: %.2f", b, a, c);
            }
        }
        else
        {
            if (a>b)
            {
                printf("Maior número: %.2f\nMenor número: %.2f\nNúmero do meio: %.2f", c, b, a);
            }
            else
            {
                printf("Maior número: %.2f\nMenor número: %.2f\nNúmero do meio: %.2f", c, a, b);
            }
        }
    }
    else
    {
        printf("Há números repetidos");
    }
}

