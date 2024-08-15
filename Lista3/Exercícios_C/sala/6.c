#include <stdio.h>
#include <math.h>
int main ()
{
    int x;
    for (x=15; x<=200; x=x+1) {
        printf("%.2f\n", pow(x, 2));
    }
    return 0;
}


