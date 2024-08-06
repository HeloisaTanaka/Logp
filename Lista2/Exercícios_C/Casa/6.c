#include <stdio.h>
int main ()

{
    int a;
    printf("Digite o valor do mês: ");
    scanf("%i", &a);

    if (a==1) {
        printf("Janeiro");
    }
    else if (a==2) {
        printf("Fevereiro");
    }
    else if (a==3) {
        printf("Março");
    }
    else if (a==4) {
        printf("Abril");
    }
    else if (a==5) {
        printf("Maio");
    }
    else if (a==6) {
        printf("Junho");
    }
    else if (a==7) {
        printf("Julho");
    }
    else if (a==8) {
        printf("Agosto");
    }
    else if (a==9) {
        printf("Setembro");
    }
    else if (a==10) {
        printf("Outubro");
    }
    else if (a==11) {
        printf("Novembro");
    }
    else if (a==12) {
        printf("Dezembro");
    }
    else {
        printf("O número inserido não corresponde a um mês");
    }
}