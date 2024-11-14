#include <stdio.h>
int main ()

{
    float a;
    int b;

    printf("Digite a nota do aluno: ");
    scanf("%f", &a);
    b = a;

    if (a>b+0.5)
    {
        printf("Nota arredondada: %i", b+1);
    }
    else
    {
        printf("Nota arredondada: %i", b);
    }
}
