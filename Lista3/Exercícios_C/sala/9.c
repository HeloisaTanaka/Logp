#include <stdio.h>
#include <math.h>
int main ()
{
    float x, y;
    printf("Digite a base: ");
    scanf("%f", &x);
    printf("Digite o expoente: ");
    scanf("%f", &y);
    printf("%.2f", pow(x, y));
    return 0;
}