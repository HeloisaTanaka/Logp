#include <stdio.h>

int pot(int b, int e) {
    int r = 1;
    while (e--) {
        r *= b;
    }
    return r;
}

int main() {
    int b, e;
    
    printf("Base: ");
    scanf("%d", &b);
    printf("Expoente: ");
    scanf("%d", &e);
    
    printf("%d^%d = %d\n", b, e, pot(b, e));
    return 0;
}