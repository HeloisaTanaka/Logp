tempo = float(input("Digite o tempo gasto na viagem, em horas: "))
vm = float(input("Digite a velocidade média, em km/h: "))

distancia = (tempo*vm)
litros = (distancia/12)

print("A velocidade média é: ", vm, "km/h")
print("O tempo gasto na viagem é: ", tempo, "h")
print("A distância percorrida é: ", distancia, "km")
print("A quantidade de litros usados é: ", litros, "l")