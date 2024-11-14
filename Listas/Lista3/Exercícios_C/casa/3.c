#include <stdio.h>
int main()
{
    int x;
    x=1;
    while (x<=20){
        if (x%2==0){
            printf("%i é par\n", x);
        }
        else{
            printf("%i é ímpar\n", x);
        }
    x = x+1;
    }
}


