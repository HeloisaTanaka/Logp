#include <stdio.h>
int main ()

{
    int a;
    printf("Digite o código do curso: ");
    scanf("%i", &a);

    if (a==1) {
        printf("Engenharia");
    }
    else if (a==2) {
        printf("Edificações");
    }
    else if (a==3) {
        printf("Sistemas elétricos");
    }
    else if (a==4) {
        printf("Turismo");
    }
    else if (a==5) {
        printf("Análise de sistemas");
    }
    else {
        printf("O número inserido não corresponde a um curso");
    }
}

