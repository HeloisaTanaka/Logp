#include <stdio.h>
int main ()
{
    char nm[100];
    float sal, t;

    printf("Digite o seu nome: ");
    scanf("%99s", nm);
    printf("Digite seu salário: ");
    scanf("%f", &sal);

    if (sal<=400){
        t=1.15;
    }
    else if (sal<=700){
        t=1.12;
    }
    else if (sal<=1000){
        t=1.10;
    }
    else if (sal<=1800){
        t=1.07;
    }
    else if (sal<=2500){
        t=1.04;
    }
    else{
        t=1;
    }
    printf ("Nome do funcionário: %s\nAumento: %.2f%%\nSalário atual: R$%.2f\nNovo salário: R$%.2f", nm, (t-1)*100, sal, sal*t);    

    return 0;
}

