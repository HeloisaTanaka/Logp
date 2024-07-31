#include <stdio.h>

int main ()

{
    float d, t, vm;
    printf("Digite a distância percorrida, em km: ");
    scanf("%f", &d);
    printf("Digite o tempo gasto, em hora: ");
    scanf("%f", &t);    
    vm = d/t;
    printf("A velocidade média do veículo era de %.2f km/h.", vm);

}
