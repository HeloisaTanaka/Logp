#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    for (x=0; x<=15; x=x+1){
        printf("3 elevado a %i é igual a %.2f\n", x, pow(3, x));
    }
    return 0;
}