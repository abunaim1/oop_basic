class Human:
    def __init__(self, name, age) -> None:
        self.name = name
        self.age = age
    def youtuber(self):
       print("I am a human")
    # force to implement this method if i call it.
    def eat(self):
        raise NotImplementedError
class Me(Human):
    def __init__(self, name, age, weight) -> None:
        self.weight = weight
        super().__init__(name, age)
    #method override.
    def youtuber(self):
        print("I am a engr.")
    def eat(self):
        print("Vat khai!!")
class Rafsan(Human):
    def __init__(self, name, age, money) -> None:
        self.moeny = money
        super().__init__(name, age)
    #method override.
    def youtuber(self):
        print("He is a youtuber")
    def eat(self):
        print("burger khai!")

obj1 = Me("Abu Naim", 24, 60)
obj1.youtuber()
obj1.eat()

obj2 = Rafsan("Rafsan", 25, 5000)
obj2.eat()