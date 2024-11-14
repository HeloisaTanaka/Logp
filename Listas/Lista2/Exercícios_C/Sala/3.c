#include <stdio.h>
int main ()

{
    float a, b;
    printf("Informe o valor de A: ");
    scanf("%f", &a);
    printf("Informe o valor de B: ");
    scanf("%F", &b);

    if (a>b) {
        printf("%.2f", a-b);
    }
    else {
        printf("%.2f", b-a);
    }
}

