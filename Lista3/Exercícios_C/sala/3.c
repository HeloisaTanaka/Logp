#include <stdio.h>
int main ()
{
    int x, y;
    printf("Digite o número da tabuada: ");
    scanf("%i", &y);
    for (x=1, x<=10, x=x+1) {
        printf("%i x %i = %i", y, x, (x*y));
    }
    return 0;
}