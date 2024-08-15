x = ["+", "-", "*", "/", "S"]
for s in x:
    s = str(input("Digite o símbolo referente à operação que se deseja realizar, caso queira encerrar o programa, digite 'S': "))

    if s=="S":
        break
    elif s=="+" or s=="-" or s=="*" or s=="/":
        x = float(input("Entre com a variável a: "))
        y = float(input("Entre com a variável b: "))
        if s=="+":
            print(x+y)
        elif s=="-":
            print(x-y)
        elif s=="*":
            print(x*y)
        else:
            print(x/y)
    else:
        print("Operação inválida.")