class pessoa:
    def __init__ (self, nome, idade):
        self.nome = nome
        self.idade = idade

    def print_infos(self):
        print (f'nome: {self.nome} \nidade: {self.idade}')

P1 = pessoa("Maria", 17)
P2 = pessoa("João", 15)
P1.print_infos()
P2.print_infos()
