#include <stdio.h>
#include <math.h>

int main ()

{
    float r, a, c;
    printf("Digite o raio da circunferência:");
    scanf("%f", &r);
    a = (3.14*pow(r, 2));
    c = 2*3.14*r;
    printf("A área do cículo é %.2f e seu comprimento é %.2f.", a, c);
}
