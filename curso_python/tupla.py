var = 123
 
t1 = (1, )
t2 = (2, )
t3 = (3, var)
 
t1, t2, t3 = t2, t3, t1
 
print(t1, t2, t3)

#As tuplas podem ter seu valor trocado pelo de outra tupla
#não pss mudar o valor das var:
#mas se as var forem determinadas antes da criação da tupla, vc pd fazê-la ter qualquer número

x, y, z = 3, 6, 1
tupla = (x, y, z)
print (tupla)   #(3, 6, 1)
x, y, z = 6, 1, 7
print (tupla)   #(3, 6, 1)