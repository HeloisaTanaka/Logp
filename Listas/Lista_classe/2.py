class car:
    def __init__ (self, brand, model, year):
        self.brand = brand
        self.model = model
        self.year = year

    def print_infos (self):
        print (f'Marca: {self.brand}\nModelo: {self.model}\nAno:{self.year}')
    
c1 = car('Toyota', 'Hilux', 2016)
c2 = car('Honda', 'HR-V', 2020)
c1.print_infos()
c2.print_infos()