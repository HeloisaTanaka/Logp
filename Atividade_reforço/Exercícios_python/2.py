print("Digite os valores\nPara exibir a média, pressione enter sem nenhum valor no campo de entrada")
x=0
m=0
menor=float('inf')
maior=float('-inf')
p=0
i=0
t1=0
t2=0
t3=0
t4=0
t5=0
e1=0
e2=0
e3=0
e4=0
e5=0
while (True):
    v = input("Entre com o valor: ")
    try:
        v = float(v)
        x = x+1
        m = v+m
        if v<=menor:
            menor=v
        elif v>=maior:
            maior=v
        
        if v<0:
            t1=t1+v
            e1=e1+1
        elif v<15:
            t2=t2+v
            e2=e2+1
        elif v<100:
            t3=t3+v
            e3=e3+1
        elif v<1000:
            t5=t5+v
            e5=e5+1
        else:
            t4=t4+v
            e4=e4+1
        
        if v%2==0:
            print(v, "é par")
            p=p+1
        else:
            print(v, "é ímpar")
            i=i+1
        
    except ValueError:
        print("Média: ", round(m/x, 2))
        print("Menor número: ", menor)
        print("Maior número: ", maior)
        print("Números pares: ", p)
        print("Números ímpares: ", i)
        print("FAIXA 1: total=", t1, "| n° de elementos: ", e1)
        print("FAIXA 2: total=", t2, "| n° de elementos: ", e2)
        print("FAIXA 3: total=", t3, "| n° de elementos: ", e3)
        print("FAIXA 4: total=", t4, "| n° de elementos: ", e4)
        print("FAIXA 5: total=", t5, "| n° de elementos: ", e5)
        break
        