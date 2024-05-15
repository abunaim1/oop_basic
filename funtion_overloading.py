# Plus sign overload
# all are plus sign but work difference 
print(20+20)
print('Abu' + 'Naim')
print([20, 30] + [100, 200])

class Cricketer:
    def __init__(self, name, age) -> None:
        self.name = name
        self.age = age
    def health():
        print("They are strong!")

    # add operator ke overloading korlam
    def __add__(self, other):
        return self.age + other.age
    # multipy operator ke overloading korlam
    def __mul__(self, other):
        return self.age * other.age

sakib = Cricketer("Sakib Al Hasan", 40)
tamim = Cricketer("Tamim Iqbal", 50)

print(sakib + tamim)
print(sakib * tamim)
        