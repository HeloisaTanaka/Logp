a = float(input("Digite o valor de A: "))
b = float(input("Digite o valor de B: "))
c = float(input("Digite o valor de C: "))

if a!=b and b!=c and c!=a:
    if a>b and a>c:
        if b>c:
            print("Maior número: ", a)
            print("Menor número: ", c)
            print("Número do meio: ", b)
        else:
            print("Maior número: ", a)
            print("Menor número: ", b)
            print("Número do meio: ", c)
    elif b>c and b>a:        
        if a>c:
            print("Maior número: ", b)
            print("Menor número: ", c)
            print("Número do meio: ", a)
        else:
            print("Maior número: ", b)
            print("Menor número: ", a)
            print("Número do meio: ", c)
    else:
        if a>b:
            print("Maior número: ", c)
            print("Menor número: ", b)
            print("Número do meio: ", a)
        else:
            print("Maior número: ", c)
            print("Menor número: ", a)
            print("Número do meio: ", b)
else:
    print("Há números repetidos")
