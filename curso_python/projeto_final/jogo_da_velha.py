jogadas = ['1', '2', '3', '4', 'x', '6', '7', '8', '9']

print('*', '*', '*', '*\n', 
    end='|     |     |     |\n',
    sep='-----') 
print('|  '+jogadas[0]+'  |  '+jogadas[1]+'  |  '+jogadas[2]+'  |')
print('|     |     |     |')

print('*', '*', '*', '*\n', 
    end='|     |     |     |\n',
    sep='-----') 
print('|  '+jogadas[3]+'  |  '+jogadas[4]+'  |  '+jogadas[5]+'  |')
print('|     |     |     |')

print('*', '*', '*', '*\n', 
    end='|     |     |     |\n',
    sep='-----') 
print('|  '+jogadas[6]+'  |  '+jogadas[7]+'  |  '+jogadas[8]+'  |')
print('|     |     |     |')
print('*', '*', '*', '*\n', sep='-----') 

#count par é máquina q joga, count ímpar é o player que joga
#ganhador: jogadas[0] == jogadas[1] == jogadas[2]
#          jogadas[3] == jogadas[4] == jogadas[5]
#          jogadas[6] == jogadas[7] == jogadas[8]
#          jogadas[0] == jogadas[4] == jogadas[8]
#          jogadas[2] == jogadas[4] == jogadas[6]
#          jogadas[0] == jogadas[3] == jogadas[6]
#          jogadas[1] == jogadas[4] == jogadas[7]
#          jogadas[2] == jogadas[5] == jogadas[8]

for i in jogadas:
    if i in jogadas[:4]:
        if jogadas[i] == jogadas[:4] or jogadas[i] == jogadas[i+3] == jogadas[i+6]:
            print('venceu')
        continue
    
    if i in jogadas[4:7]:
        if jogadas[i] == jogadas[4:7]:
            print('venceu')
    if i in jogadas[7:]:
        if jogadas[i] == jogadas[7:]:
            print('venceu')