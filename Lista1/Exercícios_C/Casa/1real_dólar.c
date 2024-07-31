#include <stdio.h>
int main ()
{
    float d, r;
    printf("Digite o valor em real:");
    scanf("%f", &r);

    d = r/2.4;
    printf("%.2f reais equivale a %.2f dólares.", r, d);
}