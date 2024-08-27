nm = str(input("Digite seu nome: "))
sal = float(input("Digite seu salário: "))

if sal<=400:
    t = 1.15
elif sal<=700:
    t = 1.12
elif sal<=1000:
    t = 1.10
elif sal<=1800:
    t = 1.07
elif sal<=2500:
    t = 1.04
else:
    t = 1

print("Nome do funcionário: ", nm, "\nAumento: ", round((t-1)*100, 2), "%", "\nSalário atual: R$", sal, "\nNovo salário: R$", round(sal*t, 2))
