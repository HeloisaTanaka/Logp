class animal:
    def sound(self):
        pass

class cachorro(animal):
    def sound(latido):
        print("auau")

class gato(animal):
    def sound(miado):
        print("miau")

def makesound(animal):
    animal.sound()

cachorro = cachorro()
gato = gato()
makesound(cachorro)
makesound(gato)