#include<stdio.h>
int main ()
{
    int x;
    int y=1;
    int z=1;
    for (x=1; x<=7; x=x+1){
        printf("%i\n%i\n", y, z);
        y=y+z;
        z=y+z;
    }
    printf("%i\n", y);
    return 0;
}