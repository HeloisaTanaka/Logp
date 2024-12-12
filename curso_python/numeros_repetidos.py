#Imagine uma lista - não muito longa, não muito complicada, 
#apenas uma lista simples que contém alguns números inteiros. 
#Alguns desses números podem ser repetidos, e essa é a pista. 
#Não queremos repetições. Queremos que eles sejam removidos.

my_list = [1, 2, 4, 4, 1, 4, 2, 6, 2, 9]

for i in my_list:
    for number in my_list[i: ]:
        if i==number:
            del my_list[number]
        
print("A lista com os elementos exclusivos aqui")
print(my_list)
