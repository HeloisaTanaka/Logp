#include <stdio.h>
int main ()

{
    float a, b, c;
    printf("Entre com o valor de A: ");
    scanf("%f", &a);
    printf("Entre com o valor de B: ");
    scanf("%f", &b);
    printf("Entre com o valor de C: ");
    scanf("%f", &c);

    if (a<(b+c) && b<(a+c) && c<(a+b) && a>0 && b>0 && c>0) {
        if (a==b && b==c) {
            printf("Os valores fornecidos remetem a um triângulo equilátero.");
        }
        else if (a==b || b==c || c==a) {
            printf("Os valores fornecidos remetem a um triângulo isósceles.");
        }
        else {
            printf("Os valores fornecidos remetem a um triângulo escaleno.");
        }
    }
    else {
        printf("Esses valores não formam um triângulo.");
    }
}
