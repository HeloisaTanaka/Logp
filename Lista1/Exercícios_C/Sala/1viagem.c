#include <stdio.h>

int main ()

{
    float t, vm, d, lu;
    printf("Digite o tempo gasto na viagem, em horas: ");
    scanf("%f", &t);
    printf("Digite a velocidade média, em km/h: ");
    scanf("%f", &vm);

    d = t*vm;
    lu = d/12;

    printf("A velocidade média é: %.2f km/h \n", vm);
    printf("O tempo gasto na viagem é: %.2f h \n", t);
    printf("A distância percorrida é: %.2f km \n", d);
    printf("A quantidade de litros usados é: %.2f l \n", lu);
}

