#include <stdio.h>
int main ()
{
    int x;
    for (x=1; x<200; x=x+1){
        if (x%4==0){
            printf("%i\n", x);
        }
        else {
            continue;
        }
    }
    return 0;
}

