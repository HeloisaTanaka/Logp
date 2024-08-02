a = int(input("Digite o valor do número inteiro A: "))
b = int(input("Digite o valor do número inteiro B: "))
c = int(input("Digite o valor do número inteiro C: "))

if a%2==0 and a%3==0:
    if b%2==0 and b%3==0:
        if c%2==0 and c%3==0:
            print("Os números ", a, ",", b, "e", c, "são divisíveis por 2 e por 3")
        else:
            print("Os números ", a, "e", b, "são divisíveis por 2 e por 3")
    else:
        if c%2==0 and c%3==0:
            print("Os números ", a, "e", c, "são divisíveis por 2 e por 3")
        else:
            print("O número ", a, "é divisível por 2 e por 3")
elif b%2==0 and b%3==0:
    if c%2==0 and c%3==0:
        print("Os números ", b, "e", c, "são divisíveis por 2 e por 3")
    else:
        print("O número ", b, "é divisível por 2 e por 3")
else:
    if c%2==0 and c%3==0:
        print("O número", c, "é divisível por 2 e por 3")
    else:
        print("Nenhum dos números inseridos é divisível por 2 e 3")

