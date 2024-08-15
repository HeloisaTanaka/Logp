#include <stdio.h>
int main()
{
    int x;
    for (x=20; x>=1; x=x-1){
        if (x%2==0){
            printf("%i é par\n", x);
        }
        else {
            printf("%i é ímpar\n", x);
        }
    }
    return 0;
}