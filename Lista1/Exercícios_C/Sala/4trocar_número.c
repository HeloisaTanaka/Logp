#include <stdio.h>
int main ()

{
    float a, b, c;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    c = a;
    a = b;
    b = c;
    printf("O valor de A é %.2f e o valor de B é %.2f", a, b);
}

