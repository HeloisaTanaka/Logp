#include <stdio.h>

int main ()

{
    float m, a, imc;
    printf("Digite a sua massa em kg: ");
    scanf("%f", &m);
    printf("Digite a sua altura em m: ");
    scanf("%f", &a);
    imc = (m/(a*a));
    printf("Seu IMC é igual a %.2f.", imc);

}

