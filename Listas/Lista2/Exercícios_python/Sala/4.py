a = float(input("Entre com o valor do lado A: "))
b = float(input("Entre com o valor do lado B: "))
c = float(input("Entre com o valor do lado C: "))

if a<(b+c) and b<(a+c) and c<(a+b) and a>0 and b>0 and c>0:
    if a==b and b==c:
        print("Os valores fornecidos remetem a um triângulo equilátero.")
    elif a==b or b==c or c==a:
        print("Os valores fornecidos remetem a um triângulo isósceles.")
    else: 
        print("Os valores fornecidos remetem a um triângulo escaleno.")
else:
    print("Esses valores não formam um triângulo.")
