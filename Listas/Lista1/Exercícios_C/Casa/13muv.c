#include <stdio.h>
#include <math.h>
int main ()

{
    float t, m;
    printf("Digite o valor do tempo, no sistema internacional: ");
    scanf("%f", &t);
    m = (2+3*t+1/2*10*pow(t, 2));
    printf("A distância percorrida foi de %.2f metros.", m);
}
