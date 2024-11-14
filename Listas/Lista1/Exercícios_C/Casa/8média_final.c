#include <stdio.h>

int main ()

{
    float n1, n2, n3, n4, mf;
    printf("Digite a nota obtida no primeiro bimestre: ");
    scanf("%f", &n1);
    printf("Digite a nota obtida no segundo bimestre: ");
    scanf("%f", &n2);
    printf("Digite a nota obtida no terceiro bimestre: ");
    scanf("%f", &n3);
    printf("Digite a nota obtida no quarto bimestre: ");
    scanf("%f", &n4);
    mf = (n1+n2+n3+n4)/4;
    printf("A média final do aluno é: %.2f", mf);

}
