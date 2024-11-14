#include <stdio.h>

int main ()

{
    float f, c;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &f);
    c = (((f-32)*5)/9);
    printf("Temperatura em graus celsius: %.2f °C", c);
}
