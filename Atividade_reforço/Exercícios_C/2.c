#include <stdio.h>
#include <math.h>
int main()
{
    double maior = -HUGE_VAL;
    double menor = HUGE_VAL;
    float m=0, t1=0, t2=0, t3=0, t4=0, t5=0;
    int x=0, e1=0, e2=0, e3=0, e4=0, e5=0, par=0, impar=0, v;
    char op;

    printf("Digite os valores\nPara exibir a média, pressione enter sem nenhum valor no campo de entrada\n");

    for(;;){
        printf("Deseja continuar? s/n: ");
        scanf(" %c", &op);
        if (op=='s' || op=='S'){
            printf("Entre com o valor: ");
            scanf(" %i", &v);
            x = x+1;
            m = v+m;
            if (v<menor){
                menor = v;
                float menor;
            }
            else if (v>maior) {
                maior = v;
                float maior;
            }
            if (v<0) {
                t1=t1+v;
                e1=e1+1;
            }
            else if (v<15){
                t2=t2+v;
                e2=e2+1;
            }
            else if (v<100) {
                t3=t3+v;
                e3=e3+1;
            }
            else if (v<1000){
                t5=t5+v;
                e5=e5+1;
            }
            else {
                t4=t4+v;
                e4=e4+1;
            }
            if (v%2==0) {
                printf("%i é par\n", v);
                par=par+1;
            }
            else {
                printf("%i é ímpar\n", v);
                impar=impar+1;
            }
        }
        else if (op=='n' || op=='N') {
            printf("Média: %.2f\n", m/x);
            printf("Menor número: %.2f\n", menor);
            printf("Maior número: %.2f\n", maior);
            printf("Números pares: %i\n", par);
            printf("Números ímpares: %i\n", impar);
            printf("FAIXA 1: total= %.2f | n° de elementos: %i\n", t1, e1);
            printf("FAIXA 2: total= %.2f | n° de elementos: %i\n", t2, e2);
            printf("FAIXA 3: total= %.2f | n° de elementos: %i\n", t3, e3);
            printf("FAIXA 4: total= %.2f | n° de elementos: %i\n", t4, e4);
            printf("FAIXA 5: total= %.2f | n° de elementos: %i\n", t5, e5);
            break;
        }
    }
}

while (True):
    v = input("Entre com o valor: ")
    try:
        v = float(v)
        x = x+1
        m = v+m
        
        
        
        
    except ValueError:
        print("Média: ", round(m/x, 2))
        print("Menor número: ", menor)
        print("Maior número: ", maior)
        print("Números pares: ", p)
        print("Números ímpares: ", i)
        print("FAIXA 1: total=", t1, "| n° de elementos: ", e1)
        print("FAIXA 2: total=", t2, "| n° de elementos: ", e2)
        print("FAIXA 3: total=", t3, "| n° de elementos: ", e3)
        print("FAIXA 4: total=", t4, "| n° de elementos: ", e4)
        print("FAIXA 5: total=", t5, "| n° de elementos: ", e5)
        break
        