#include <stdio.h>
int main ()

{
    float n1, n2, n3, m1;
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    m1 = (n1+n2)/2;

    if (m1>=6) {
        printf("Aluno aprovado \nMédia %.2f", m1);
    }
    else {
        printf("Digite a nota do exame: ");
        scanf("%f", &n3);
        m1 = (m1+n3)/2;
        if (m1>=5) {
            printf("Aluno aprovado \nMédia %.2f", m1);
        }
        else {
            printf("Aluno reprovado \nMédia %.2f", m1);
        }
    }
    
}

