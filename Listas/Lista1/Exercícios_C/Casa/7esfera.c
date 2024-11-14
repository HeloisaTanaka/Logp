#include <stdio.h>
#include <math.h>
int main ()

{
    float r, v, a;
    printf("Digite o comprimento do raio da esfera:");
    scanf("%f", &r);
    v = (1.33*3.14*pow(r, 3));
    a = (4*3.14*pow(r, 2));
    printf("O volume da esfera é de %.2f e sua área é de %.2f.", v, a);
}

