#include <stdio.h>
int main()
{
    int x;
    int y=0;
    for(x=1; x<=100; x=x+1){
        y=y+x;
    }
    printf("%i", y);
    return 0;
}
