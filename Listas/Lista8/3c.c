#include <stdio.h>

float calcular_prestacao(float valor, float taxa, int tempo) {
    float juros = valor * (taxa / 100) * tempo;
    return valor + juros;
}

int main() {
    float v, t, p;
    int temp;
    
    printf("Digite o valor: ");
    scanf("%f", &v);
    printf("Digite a taxa: ");
    scanf("%f", &t);
    printf("Digite o tempo: ");
    scanf("%d", &temp);
    
    p = calcular_prestacao(v, t, temp);
    
    printf("A prestacao em atraso e: %.2f\n", p);
    return 0;
}