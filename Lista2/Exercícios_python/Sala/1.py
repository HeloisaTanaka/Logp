n1 = float(input("Digite a nota 1: "))
n2 = float(input("Digite a nota 2: "))
n3 = float(input("Digite a nota 3: "))

m1 = (n1+n2+n3)/3

if (n1>=6):
    print("Você está aprovado. Média:", round(m1, 2))
else:
    print("Você está reprovado. Média:", round(m1, 2))

