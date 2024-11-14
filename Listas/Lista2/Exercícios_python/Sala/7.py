a = int(input("Digite um número inteiro: "))
if a==0:
    print("0 não possui módulo, uma vez que é um número neutro")
elif a>0:
    print("O módulo de", a, "é", a)
else:
    print("O módulo de", a, "é", a*(-1))

