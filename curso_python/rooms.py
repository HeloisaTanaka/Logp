rooms = [[[False for r in range(20)] for f in range(15)] for t in range(3)]
#Hotel com 3 prédios, 15 andares cada, 20 quartos cada andar

#código do curso
vacancy = 0
for room_number in range(20):         #para cada quarto do prédio 3 andar 15
    if not rooms[2][14][room_number]: #terceiro elemento é falso(não tem valor dentro)? se ss, continua, ou seja, há vaga
        vacancy += 1
print (vacancy)

#Meu código
vacancy = 0
rooms[2][14][17] = True #só para ver se estava realmente funcionando
 
for room_number in rooms[2][14]: #caso eu não soubesse quantos quartos o andar tem
    if not room_number:   #o not transforma o False do quarto vago em True, assim a condição prossegue
        vacancy += 1
 
print(vacancy)