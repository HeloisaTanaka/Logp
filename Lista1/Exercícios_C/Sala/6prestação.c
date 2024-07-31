#include <stdio.h>
int main ()

{
    float pv, taxa, t, pa;
    printf("Digite o valor da prestação: ");
    scanf("%f", &pv);
    printf("Digite o valor da taxa de juros: ");
    scanf("%f", &taxa);
    printf("Digite o tempo em atraso: ");
    scanf("%f", &t);
    pa = pv+(pv*t*(taxa/100));
    printf("O valor da prestação em atraso é R$%.2f", pa);
}





pv = float(input("Digite o valor da prestação: "))
taxa = float(input("Digite o valor da taxa de juros: "))
tempo = float(input("Digite o tempo em atraso: "))
pa = pv+(pv*tempo*(taxa/100))
print("O valor da prestação em atraso é", pa, "R$.")
