#include <stdio.h>

int main ()

{
    float p1, p2, a, m;
    printf("Digite a nota obtida na primeira avaliação do semestre: ");
    scanf("%f", &p1);
    printf("Digite a nota obtida na segunda avaliação do semestre: ");
    scanf("%f", &p2);
    printf("Digite a nota obtida através das atividades do semestre: ");
    scanf("%f", &p2);
    m = (p1*4+p2*4+a*2)/10;
    printf("A média semestral do aluno é: %.2f", m);
}
