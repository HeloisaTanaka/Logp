a = int(input("Digite o valor de a: "))
b = int(input("Digite o valor de b: "))
c = int(input("Digite o valor de c: "))
d = int(input("Digite o valor de d: "))
e = int(input("Digite o valor de e: "))

if (a>b and a>c and a>d and a>e):
    if (b<c and b<d and b<e):
        print("Maior: ", a)
        print("Menor: ", b)
    elif (c<b and c<d and c<e):
        print("Maior: ", a)
        print("Menor: ", c)
    elif (d<b and d<c and d<e):
        print("Maior: ", a)
        print("Menor: ", d)
    else:
        print("Maior: ", a)
        print("Menor: ", e)
elif (b>a and b>c and b>d and b>e):
    if (a<c and a<d and a<e):
        print("Maior: ", b)
        print("Menor: ", a)
    elif (c<a and c<d and c<e):
        print("Maior: ", b)
        print("Menor: ", c)
    elif (d<a and d<c and d<e):
        print("Maior: ", b)
        print("Menor: ", d)
    else:
        print("Maior: ", b)
        print("Menor: ", e)
elif (c>a and c>b and c>d and c>e):
    if (a<b and a<d and a<e):
        print("Maior: ", c)
        print("Menor: ", a)
    elif (b<a and b<d and b<e):
        print("Maior: ", c)
        print("Menor: ", b)
    elif (d<a and d<b and d<e):
        print("Maior: ", c)
        print("Menor: ", d)
    else:
        print("Maior: ", c)
        print("Menor: ", e)
elif (d>a and d>b and d>c and d>e):
    if (a<b and a<c and a<e):
        print("Maior: ", d)
        print("Menor: ", a)
    elif (b<a and b<c and b<e):
        print("Maior: ", d)
        print("Menor: ", b)
    elif (c<a and c<b and c<e):
        print("Maior: ", d)
        print("Menor: ", c)
    else:
        print("Maior: ", d)
        print("Menor: ", e)
else: 
    if (a<b and a<c and a<e):
        print("Maior: ", e)
        print("Menor: ", a)
    elif (b<a and b<c and b<e):
        print("Maior: ", e)
        print("Menor: ", b)
    elif (c<a and c<b and c<e):
        print("Maior: ", e)
        print("Menor: ", c)
    else:
        print("Maior: ", e)
        print("Menor: ", d)
