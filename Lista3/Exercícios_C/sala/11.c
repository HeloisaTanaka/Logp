#include <stdio.h>
int main ()
{
    float a, b, c, d, e;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);
    printf("Digite o valor de D: ");
    scanf("%f", &d);
    printf("Digite o valor de E: ");
    scanf("%f", &e);
    if (a>b && a>c && a>d && a>e){
        if (b<c && b<d && b<e){
            printf("Maior: %.2f\nMenor: %.2f", a, b);
        }
        else if (c<b && c<d && c<e){
            printf("Maior: %.2f\nMenor: %.2f", a, c);
        }
        else if (d<b && d<c && d<e){
            printf("Maior: %.2f\nMenor: %.2f", a, d);
        }
        else{
            printf("Maior: %.2f\nMenor: %.2f", a, e);
        }
    }
    else if (b>a && b>c && b>d && b>e) {
        if (a<c && a<d && a<e){
            printf("Maior: %.2f\nMenor: %.2f", b, a);
        }
        else if (c<a && c<d && c<e){
            printf("Maior: %.2f\nMenor: %.2f", b, c);
        }
        else if (d<a && d<c && d<e){
            printf("Maior: %.2f\nMenor: %.2f", b, d);
        }
        else{
            printf("Maior: %.2f\nMenor: %.2f", b, e);
        }
    }
    else if (c>a && c>b && c>d && c>e) {
        if (a<b && a<d && a<e){
            printf("Maior: %.2f\nMenor: %.2f", c, a);
        }
        else if (b<a && b<d && b<e){
            printf("Maior: %.2f\nMenor: %.2f", c, b);
        }
        else if (d<a && d<b && d<e){
            printf("Maior: %.2f\nMenor: %.2f", c, d);
        }
        else{
            printf("Maior: %.2f\nMenor: %.2f", c, e);
        }
    }
    else if (d>a && d>c && d>b && d>e) {
        if (a<c && a<b && a<e){
            printf("Maior: %.2f\nMenor: %.2f", d, a);
        }
        else if (c<a && c<b && c<e){
            printf("Maior: %.2f\nMenor: %.2f", d, c);
        }
        else if (b<a && b<c && b<e){
            printf("Maior: %.2f\nMenor: %.2f", d, b);
        }
        else{
            printf("Maior: %.2f\nMenor: %.2f", d, e);
        }
    }
    else {
        if (a<c && a<b && a<d){
            printf("Maior: %.2f\nMenor: %.2f", e, a);
        }
        else if (c<a && c<b && c<d){
            printf("Maior: %.2f\nMenor: %.2f", e, c);
        }
        else if (b<a && b<c && b<d){
            printf("Maior: %.2f\nMenor: %.2f", e, b);
        }
        else{
            printf("Maior: %.2f\nMenor: %.2f", e, d);
        }
    }
    return 0;
}