n1 = float(input("Digite a nota 1: "))
n2 = float(input("Digite a nota 1: "))

m1 = (n1+n2)/2

if m1>=6:
    print("Aluno aprovado. Média:", round(m1, 2))
else:
    n3 = float(input("Digite a nota de exame: "))
    m1 = (m1+n3)/2
    if m1>=5:
        print("Aluno aprovado. Média: ", round(m1, 2))
    else:
        print("Aluno reprovado. Média: ", round(m1, 2))
