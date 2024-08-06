#include <stdio.h>
int main ()

{
    float s, t;
    printf("Digite o valor do salário:");
    scanf("%f", &s);
    printf("Digite quantas horas foram trabalhadas: ");
    scanf("%f", &t);

    if (s<800) {
        if (t>160) {
            s = s+(t-160)*(s/160*0.5);
            printf("O salário do funcionário é R$%.2f", s);
        }
        else {
            printf("O salário do funcionário é R$%.2f", s);
        }
    }
    else if (s<=1600) {
        s = s-(s*(0.08+0.05));
        if (t>160) {
            s = s+(t-160)*(s/160*0.5);
            printf("O salário do funcionário é R$%.2f", s);
        }
        else {
            printf("O salário do funcioário é R$%.2f", s);
        }
    }
    else {
        s = s-(s*(0.15+0.07));
        if (t>160) {
            s = s+(t-160)*(s/160*0.5);
            printf("O salário do funcionário é R$%.2f", s);
        }
        else {
            printf("O salário do funcionário é R$%.2f", s);
        }
    }
}