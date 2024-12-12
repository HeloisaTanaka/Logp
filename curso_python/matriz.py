#Matriz Bidimensional

board = []
 
for i in range(8):
    row = [EMPTY for i in range(8)]
    board.append(row)
print(board) 


board = [[EMPTY for i in range(8)] for j in range(8)] #o mesmi do de cima, porém aninhado
#8 espaços(EMPTY) por linha
#8 dessas linhas (O elemento [EMPTY for i in range(8)] se repete 8 vezes por causa do for j)
#8x8 = 64 espaços

#Temos duas listas:
#[EMPTY for i in range(8)] a que o EMPTY é adicionado
#[[EMPTY for i in range(8)] for j in range(8)] a que a lista de cima é adicionada 8 vezes

#A parte interna cria uma linha e a parte externa cria uma lista de linhas.
#1º índice é a linha
#2º índice é o coluna