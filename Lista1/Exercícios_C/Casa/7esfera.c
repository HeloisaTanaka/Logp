#include <stdio.h>

int main ()

{
    float r, v, a;
    printf("Digite o comprimento do raio da esfera:");
    scanf("%f", &r);
    v = (4/3*3.14*(r*r*r));
    a = (4*3.14*(r*r));
    printf("O volume da esfera é de %.2f e sua área é de %.2f.", v, a);
}
