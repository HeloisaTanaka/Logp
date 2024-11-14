a = float(input("Entre com o valor de A: "))
b = float(input("Entre com o valor de B: ")) 
c = float(input("Entre com o valor de C: ")) 

if a==b or b==c or a==c:
    print("Insira apenas números diferentes")
else:
    if a<b and a<c:
        if b<c:
            print(a, b, c)
        else:
            print(a, c, b)
    elif b<a and b<c:
        if a<c:
            print(b, a, c)
        else:
            print(b, c, a)
    else:
        if b<a:
            print(c, b, a)
        else:
            print(c, a, b)
    

