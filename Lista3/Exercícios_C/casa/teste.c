#include <stdio.h>
int main()
{
    char s='+';
    float a, b;
    while (s=='+' || s=='-' || s=='*' || s=='/' || s=='s' || s=='S'){
        printf("Digite o símbolo da operação, caso queira sair do programa, digite 'S': ");
        scanf ("%c", &s);
        if (s=='s' || s=='S'){
            break;
        }
        else if (s=='+' || s=='-' || s=='*' || s=='/'){
            printf("Digite a variável a: ");
            scanf("%f", &a);
            printf("Digite a variável b: ");
            scanf("%f", &b);
            if (s=='+'){
                printf("%f\n", a+b);
            }
            else if (s=='-'){
                printf("%f\n", a-b);
            }
            else if (s=='*'){
                printf("%f\n", a*b);
            }
            else {
                printf("%f\n", a/b);
            }
        }
        else {
            printf("Operação inválida");
        }
        
    }
}