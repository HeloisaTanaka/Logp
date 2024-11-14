#include <stdio.h>
#include <math.h>
int main ()

{
    float a, b, c, d, x1, x2;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    if (a!=0) {
        d = (pow(b, 2))-(4*a*c);
        if (d<0) {
            printf("A equação não tem solução.");
        }
        else if (d==0) {
            x1 = -b/(2*a);
            x2 = x1;
            printf("A equação tem duas raízes reais e iguais\nx1=%.2f\nx2=%.2f", x1, x2);
        }
        else {
            x1 = (-b+pow(d, 0.5))/(2*a);
            x2 = (-b-pow(d, 0.5))/(2*a);
            printf("A equação tem duas raízes reais e diferentes\nx1=%.2f\nx2=%.2f", x1, x2);
        }
    }
    else {
        printf("Não é uma equação de segundo grau.");
    }
}
