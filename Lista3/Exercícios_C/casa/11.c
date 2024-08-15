#include <stdio.h>
int main ()
{
    int x, y;
    printf("Digite o número da tabuada: ");
    scanf("%i", &x);
    for (y=0; y<=10; y=y+1){
        printf("%i x %i = %i\n", x, y, (x*y));
    }
    return 0;
}

