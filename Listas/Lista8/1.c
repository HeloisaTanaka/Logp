#include<stdio.h>
#include<conio.h>
#include <stdbool.h>

int main() {

    int index, categoria, action, search;
    bool loop = true, found;

    struct infos {
        char name[40], address[40], email[40];
        int phone[1], search;
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
        fflush(stdin); scanf("%d", &person[i].phone[0]);    
    }


    while(true){
        printf("Insira 1 para pesquisar pelo nome, 2 para alterar informações, 3 para sair ou 4 para deletar informações:\n");
        scanf("%d", &action);
        if (action == 3) {
            break;
        }
        else if(action == 1){
            printf("Pesquise pela idade do cliente, digite -1 para parar:\n");
            while (loop) {
                scanf("%d", &search);
                if (search == -1){
                    loop = false;
                }
                else {
                    bool found = false;
                    for (int i = 0; i<5; i++) {
                        if (person[i].age[0] == search) {
                            printf("%s: %d\n", person[i].name, person[i].age[0]);
                            found = true;
                        }
                        else {continue;}
                    }

                    if (found) {
                        continue;
                    }
                    else {
                        printf("Não há clientes com esta idade\n");
                    }
                }        
            }
        }

        else if (action == 2) {
            loop = true;
            printf("Alteração de registros:\n");


            while (loop) {
                for (int i=0; i<5; i++) {
                    printf("%d | %s | Endereço: %s | Idade: %d\n | Telefone: %d\n", i, person[i].name, person[i].address, person[i].age[0], person[i].phone[0]);
                }
                printf("Digite o número correspondete ao cliente que se deseja fazer a alteração ou aperte 0 para sair:\n");
                scanf("%d", &index);
                if (index == 0) {
                    loop = false;
                }
                else {
                    printf("Digite '1' para nome, '2' para endereço, '3' para idade e '4' para telefone:\n");
                    scanf("%d", &categoria);
                    printf("Digite as alterações:\n");
                    if (categoria == 1) {
                        fflush(stdin); fgets(person[index].name, 40, stdin);
                    }
                    else if (categoria == 2) {
                        fflush(stdin); fgets(person[index].address, 40, stdin);
                    }
                    else if (categoria == 3) {
                        scanf("%d", person[index].age);
                    }
                    else if (categoria == 4) {
                        scanf("%d", person[index].phone);
                    }
                }
            }
        }

    }
    
    return 0;
}

/*Algo não está permitindo que eu digite os nomes (com exceção da primeira pessoa) 
e nem que faça alterações nos mesmos, procurei o erro mas não encotrei
o resto do código está funcionando*/