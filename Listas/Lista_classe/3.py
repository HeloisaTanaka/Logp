class ContaBancaria:
    def __init__(self, titular, saldo):
        self.titular = titular
        self.saldo = saldo
    
    def depositar(self, saldo):
        self.saldo += saldo
        print (f'Saldo: {self.saldo}')
    
    def sacar(self, saque):
        if (self.saldo > saque):
            self.saldo -= saque
            print (f'Saldo: {self.saldo}')
        else:
            print('Transação inválida, saldo insuficiente')

c1 = ContaBancaria("Eduardo", 50)
c1.depositar(2)
c1.sacar(51)