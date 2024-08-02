a = int(input("Digite o valor do número inteiro A: "))
b = int(input("Digite o valor do número inteiro B: "))

if a%4==0 or a%5==0:
    if b%4==0 or b%5==0:
        print(a, "e", b, "são divisíveis por 4 ou por 5")
    else:
        print(a, "é divisível por 4 ou por 5")
else:
    if b%4==0 or b%5==0:
        print(b, "é divisível por 4 ou por 5")
    else:
        print("Nenhum dos números inseridos é divisível por 4 ou por 5")
