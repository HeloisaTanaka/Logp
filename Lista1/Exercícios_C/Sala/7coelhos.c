#include <stdio.h>
int main ()

{
    float co, cu;
    printf("Digite a quantidade de coelhos: ");
    scanf("%f", &co);
    cu = (co*0.7)/18+10;
    printf("Com %.2f coelhos, o valor do custo será de R&%.2f.", co, cu);
}


coelhos = int(input("Digite a quantidade de coelhos: "))
custos = ((coelhos*0.7)/18+10)
print("Com", coelhos, "coelhos, o valor do custo será de R$", round(custos, 2))