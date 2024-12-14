#include<stdio.h>
#include<conio.h>
#include <stdbool.h>

int main() {

    int index, categoria, action;
    bool loop = true, found;
    char search;

    struct infos {
        char name[40], address[40], email[40], phone[10];
    }; struct infos person[5];

    printf("Cadastro\n");
    for (int i=0; i<5; i++) {
        printf("Informe o nome do cliente %d:\n", i+1);
        fflush(stdin); fgets(person[i].name, 40, stdin);

        printf("Informe o endereço do cliente %d:\n", i+1);
        fflush(stdin); fgets(person[i].address, 40, stdin);

        printf("Informe o email do cliente %d:\n", i+1);
        fflush(stdin); fgets(person[i].email, 40, stdin);

        printf("Informe o telefone do cliente %d:\n", i+1);
        fflush(stdin); fgets(person[i].phone, 10, stdin);
    }


    while(true){
        printf("Insira 1 para pesquisar pelo nome, 2 para alterar informações, 3 para sair ou 4 para deletar informações:\n");
        scanf("%d", &action);
        if (action == 3) {
            break;
        }
        else if(action == 1){
            printf("Pesquise pelo nome do cliente, digite -1 para parar:\n");
            while (loop) {
                scanf("%s", &search);
                if (search == "-1"){
                    loop = false;
                }
                else {
                    bool found = false;
                    for (int i = 0; i<5; i++) {
                        if (person[i].name == search) {
                            printf("%s: %s %s %s\n", person[i].name, person[i].phone, person[i].address, person[i].email );
                            found = true;
                        }
                        else {continue;}
                    }

                    if (found) {
                        continue;
                    }
                    else {
                        printf("Não há clientes com este nome\n");
                    }
                }        
            }
        }

        else if (action == 2) {
            loop = true;
            printf("Alteração de registros:\n");


            while (loop) {
                for (int i=0; i<5; i++) {
                    printf("%d | %s | Endereço: %s | email: %s\n | Telefone: %s\n", i, person[i].name, person[i].address, person[i].email, person[i].phone);
                }
                printf("Digite o número correspondete ao cliente que se deseja fazer a alteração ou aperte 0 para sair:\n");
                scanf("%d", &index);
                if (index == 0) {
                    loop = false;
                }
                else {
                    printf("Digite '1' para nome, '2' para endereço, '3' para email e '4' para telefone:\n");
                    scanf("%d", &categoria);
                    printf("Digite as alterações:\n");
                    if (categoria == 1) {
                        fflush(stdin); fgets(person[index].name, 40, stdin);
                    }
                    else if (categoria == 2) {
                        fflush(stdin); fgets(person[index].address, 40, stdin);
                    }
                    else if (categoria == 3) {
                        scanf("%s", person[index].email);
                    }
                    else if (categoria == 4) {
                        scanf("%s", person[index].phone);
                    }
                }
            }
        }

    }
    
    else if (action == 4) {
        loop = true;
        while (loop) {
            for (int i=0; i<5; i++) {
                printf("%d | %s | Endereço: %s | email: %s\n | Telefone: %s\n", i, person[i].name, person[i].address, person[i].email, person[i].phone[0]);
            }
            printf("Digite o número correspondete ao cliente que se deseja fazer a alteração ou aperte 0 para sair:\n");
            scanf("%d", &index);
            if (index == 0) {
                loop = false;
            }
            else {
                printf("Digite '1' para apagar o nome, '2' para o endereço, '3' para o email e '4' para o telefone:\n");
                scanf("%d", &categoria);
                printf("Digite as alterações:\n");
                if (categoria == 1) {
                    person[index].name = '';
                }
                else if (categoria == 2) {
                    person[index].address = '';
                }
                else if (categoria == 3) {
                    person[index].email = '';
                }
                else if (categoria == 4) {
                    person[index].phone = '';
                }
            }
        }
    }


    else {
        printf("Comando inválido\n")
        continue;
    }

    return 0;
}

/*Ainda está sendo feito*/