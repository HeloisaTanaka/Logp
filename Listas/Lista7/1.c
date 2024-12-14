#include <stdio.h>
#include <string.h>

typedef struct {
    char n[50];
    char e[100];
    int i;
    char t[10];
} C;

void a(C c[]) {
    for (int j = 0; j < 5; j++) {
        printf("Cadastro %d:\n", j + 1);
        printf("Nome: ");
        scanf(" %s", c[j].n);
        printf("Endereco: ");
        scanf(" %s", c[j].e);
        printf("Idade: ");
        scanf("%d", &c[j].i);
        printf("Telefone: ");
        scanf(" %s", c[j].t);
    }
}

void b(C c[]) {
    int x;
    printf("Digite a idade para pesquisa: ");
    scanf("%d", &x);
    for (int j = 0; j < 5; j++) {
        if (c[j].i == x) {
            printf("Nome: %s, Endereco: %s, Telefone: %s\n", c[j].n, c[j].e, c[j].t);
        }
    }
}

void c(C c[]) {
    C tmp;
    for (int j = 0; j < 5 - 1; j++) {
        for (int k = j + 1; k < 5; k++) {
            if (strcmp(c[j].n, c[k].n) > 0) {
                tmp = c[j];
                c[j] = c[k];
                c[k] = tmp;
            }
        }
    }
    printf("Agenda ordenada por nome:\n");
    for (int j = 0; j < 5; j++) {
        printf("Nome: %s, Endereco: %s, Idade: %d, Telefone: %s\n", c[j].n, c[j].e, c[j].i, c[j].t);
    }
}

void d(C c[]) {
    char n[50];
    printf("Digite o nome da pessoa para alterar o registro: ");
    scanf(" %s", n);
    for (int j = 0; j < 5; j++) {
        if (strcmp(c[j].n, n) == 0) {
            printf("Novo Nome: ");
            scanf(" %s", c[j].n);
            printf("Novo Endereco: ");
            scanf(" %s", c[j].e);
            printf("Nova Idade: ");
            scanf("%d", &c[j].i);
            printf("Novo Telefone: ");
            scanf(" %s", c[j].t);
            return;
        }
    }
    printf("Erro: Registro nao encontrado.\n");
}

int main() {
    C c[5];
    int op;

    do {
        printf("Menu:\n");
        printf("1- Adicionar Contato\n");
        printf("2- Buscar por Idade\n");
        printf("3- Ordenar por Nome\n");
        printf("4- Alterar Registro\n");
        printf("5- Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        if (op == 1) {
            a(c);
        } else if (op == 2) {
            b(c);
        } else if (op == 3) {
            c(c);
        } else if (op == 4) {
            d(c);
        } else if (op == 5) {
            printf("Saindo...\n");
        } else {
            printf("Opcao invalida.\n");
        }

    } while (op != 5);

    return 0;
}