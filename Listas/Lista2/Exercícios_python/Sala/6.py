a = float(input("Digite o valor de a: "))
b = float(input("Digite o valor de b: "))
c = float(input("Digite o valor de c: "))
 
if a!=0:
    d = (b**2)-(4*a*c)
    if d<0:
        print("A equação não tem solução")
    elif d==0:
        x1 = -b/(2*a)
        x2 = x1
        print("A equação tem duas raízes reais e iguais, x1=", round(x1, 2), "e x2=", round(x2, 2))
    else:
        x1 = (-b+d**0.5)/(2*a)
        x2 = (-b-d**0.5)/(2*a)
        print("A equação tem duas raízes reais e diferentes, x1=", round(x1, 2), "e x2=", round(x2, 2))
else:
    print("Não é uma equação de segundo grau")
