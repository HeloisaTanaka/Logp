#include <stdio.h>

int main()

{
    float ap, lp, aa, la, a;
    printf("Digite a altura da parede: ");
    scanf("%f", &ap);
    printf("Digite a largura da parede: ");
    scanf("%f", &lp);
    printf("Digite a altura do azulejo: ");
    scanf("%f", &aa);
    printf("Digite a largura do azulejo: ");
    scanf("%f", &la);

    a = (ap*lp)/(aa*la);
    printf("Serão necesários %.2f azulejos para azulejar a parede.", a);
}

