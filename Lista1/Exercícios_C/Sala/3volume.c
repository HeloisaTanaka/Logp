#include <stdio.h>
#include <math.h>
int main ()

{
    float a, r, v;
    printf("Digite a altura da lata, em cm: ");
    scanf("%f", &a);
    printf("Digite o raio da lata, em cm: ");
    scanf("%f", &r);
    v = 3.14159*pow(r, 2)*a;
    printf("O volume da lata é: %.2fcm³", v);
}

