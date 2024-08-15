#include <stdio.h>
int main()
{
    float x;
    for (x=1; x<=20; x=x+1){
        if (x%2==0){
            printf("%f é par\n", x);
        }
        else{
            printf("%f é ímpar\n", x);
        }
    }
    return 0;
}
