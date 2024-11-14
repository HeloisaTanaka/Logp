s = float(input("Digite o valor do salário: "))
t = float(input("Digite quantas horas foram trabalhadas: "))

if s<800:
    if t>160:
        s = s+(t-160)*(s/160*0.5)
        print("O salário do funcionário é: R$", round(s, 2))
    else:
        print("O salário do funcionário é: R$", round(s, 2))
elif s<=1600:
    s = s-(s*(0.08+0.05))
    if t>160:
        s = s+(t-160)*(s/160*0.5)
        print("O salário do funcionário é: R$", round(s, 2))
    else:
        print("O salário do funcionário é: R$", round(s, 2))
else:
    s = s-(s*(0.15+0.07))
    if t>160:
        s = s+(t-160)*(s/160*0.5)
        print("O salário do funcionário é: R$", round(s, 2))
    else:
        print("O salário do funcionário é: R$", round(s, 2))

