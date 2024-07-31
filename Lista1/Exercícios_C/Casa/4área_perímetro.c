#include <stdio.h>

int main ()

{
    float a, b, A, P;
    printf("Digite o comprimento do lado A: ");
    scanf("%f", &a);
    printf("Digite o comprimento do lado B: ");
    scanf("%f", &b);
    A = a*b;
    P = a*2+b*2;
    printf("Este retângulo possui %.2f de área e %.2f de perímetro.", A, P);


}
