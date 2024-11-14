#include <stdio.h>
int main ()
{
    float x;
    printf("Insira um valor menor ou igual a 50: ");
    scanf("%f", &x);
    if (x<=50){
        for (x; x<250; x=x*3){
        printf("%.2f\n", x);
        }
    }
    else{
        printf("Número inválido");
    }
    return 0;
}
