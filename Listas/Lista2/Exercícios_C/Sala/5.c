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

    if (a==b || b==c || c==a) {
        printf("Insira apenas números diferentes.");
    }
    else {
        if (a<b && a<c) {
            if (b<c) {
                printf("%.2f, %.2f, %.2f.", a, b, c);
            }
            else {
                printf("%.2f, %.2f, %.2f.", a, c, b);
            }
        }
        else if (b<a && b<c) {
            if (a<c) {
                printf("%.2f, %.2f, %.2f.", b, a, c);
            }
            else {
                printf("%.2f, %.2f, %.2f.", b, c, a);
            }
        }
        else {
            if (b<a) {
                printf("%.2f, %.2f, %.2f.", c, b, a);
            }
            else {
                printf("%.2f, %.2f, %.2f.", c, a, b);
            }
        }
    }
}

