#include <stdio.h>
int main ()

{
    float n1, n2, n3, m1;
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    m1 = (n1+n2+n3)/3;

    if (m1>=6) {
        printf("Você está aprovado \nMédia %.2f", m1);
    }
    else {
        printf("Você está reprovado \nMédia %.2f", m1);
    }
}
