#include <stdio.h>
#include <stdbool.h>

int main(){
    int a[12];
    bool swapped = true;

    printf("insira 12 valores inteiros para A:\n");
    for (int i=0; i<12; i++) {
        scanf("%d", &a[i]);
    }

    while (swapped) { 
        swapped = false;       
        for (int i=0; i<12; i++) {
            if (a[i]<a[i+1]) {
                swapped = true;
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    for (int i=0; i<12; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
