a = int(input("Digite um número inteiro entre 0 e 100: "))
c = int(input("Digite um número chave: "))

if a>=0 and a<=100:
    if a>c:
        print("A distrância entre esses números é", a-c)
    else:
        print("A distrância entre esses números é", c-a)
else:
    print("Número inválido")

