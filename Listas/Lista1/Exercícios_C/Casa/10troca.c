#include <stdio.h>

int main ()

{
    float a, b, c;
    printf("Digite A: ");
    scanf("%f", &a);
    printf("Digite B: ");
    scanf("%f", &b);
    c = a;
    a = b;
    b = c;
    printf("O valor de A é %.2f, enquanto o valor de B é %.2f.", a, b);

}
