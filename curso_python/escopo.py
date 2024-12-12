def my_function():
    print("Eu conheço aquela variável?", var)


var = 1
my_function()
print(var)

#A função reconhece uma var fora da função, 
#mas o código não reconhece uma var declarada dentro,
#A não ser que esteja em return 

def my_function():
    var = 2
    print("Eu conheço aquela variável?", var)

var = 1
my_function()
print(var)
 
#Nesse caso a função dá prioridade para a var dela

global name
global name1, name2

#declaram que são var globais, ou seja, a func usará os valores das var fora de seu corpo
#com isso posso mudar o valor de uma var atravésda func

def my_function():
 global var
 var = 2
 print("Eu conheço aquela variável?", var)

var = 1
my_function()
print(var)

#No caso a seguir,n tem o valor de var, mas não é var propriamente dito
#Ou seja, não mudará o valor de var quando eu mudo o valor de n
#Também se aplica a listas, visto que passo o valor do argumento ao parâmetro
#não os igualo, logo não são o mesmo espaço na memória

def my_function(n):
 print("Eu obtive", n)
 n += 1
 print("Eu tenho", n)


var = 1
my_function(var)
print(var)

#Nesse caso irá modificar o valor da lista_2 tbm

def my_function(my_list_1):
    print("Print #1:", my_list_1)
    print("Print #2:", my_list_2)
    del my_list_1[0]  # Pay attention to this line.
    print("Print #3:", my_list_1)
    print("Print #4:", my_list_2)
 
 
my_list_2 = [2, 3]
my_function(my_list_2)
print("Print #5:", my_list_2)
 
